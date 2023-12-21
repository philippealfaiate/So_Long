/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_nl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:41:22 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/03 19:43:06 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
char	*remove_nl(char *line)
{
	int	len;

	if (line != NULL)
	{
		len = ft_strlen(line);
		if (line[len - 1] == '\n')
		line[len - 1] = '\0';
	}	
	return (line);
}
