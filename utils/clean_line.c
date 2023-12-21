/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:41:22 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/03 19:44:46 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
char	*clean_line(char *line)
{
	char	*cpy;

	cpy = line;
	while (*cpy)
	{
		if (*cpy == '\n')
		*cpy = '\0';
		cpy++;
	}
	return (line);
}
