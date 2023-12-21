/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:18:27 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/06 11:19:07 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	line_size_to(char *line, char c)
{
	int	i;

	i = 0;
	while (line[i] != c && line[i] != '\0')
		i++;
	return (i);
}

/**
 * 
*/
int	line_check(char *line)
{
	int	i;
	int	size;

	size = line_size_to(line, '\n');
	if (size < D_COLS)
		return (0);
	i = 0;
	while (i < size)
	{
		if (ft_strchr("01CEP", line[i]) == NULL)
			return (0);
		i++;
	}
	return (1);
}

/**
 * 
*/
t_params	*map_parser(t_params *p, int fd)
{
	char	*line;
	char	*tmp;
	int		err;

	err = 1;
	p->ber = ft_strdup("");
	exit_if(p->ber == NULL, strerror(errno), p);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		err *= line_check(line);
		tmp = ft_strjoin(p->ber, line);
		free(p->ber);
		p->ber = tmp;
		p->map_rows++;
		if (p->map_cols < line_size_to(line, '\n'))
			p->map_cols = line_size_to(line, '\n');
		free(line);
	}
	exit_if(!err, ERR_MAP, p);
	return (p);
}
