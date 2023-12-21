/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:36:33 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/03 19:16:16 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	check_line(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (i >= D_COLS)
		return (0);
	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] != '\n')
		{
			if (ft_strchr("01CEP", line[i]) == NULL)
				return (0);
		}
		i++;
	}
	return (1);
}
