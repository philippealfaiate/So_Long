/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bounderies_validation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:43:26 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/20 17:44:49 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	bounderies_validation(t_params *p)
{
	int	r;
	int	c;

	r = 0;
	while (r < p->map_rows)
	{
		c = 0;
		while (c < p->map_cols)
		{
			if (p->map[0][c] != (int) WALL
				|| p->map[p->map_rows - 1][c] != (int) WALL)
				return (0);
			if (p->map[r][0] != (int) WALL
				|| p->map[r][p->map_cols - 1] != (int) WALL)
				return (0);
			c++;
		}
		r++;
	}
	return (1);
}
