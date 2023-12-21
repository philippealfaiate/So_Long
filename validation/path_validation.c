/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:55:56 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/05 11:36:37 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	path_validation(t_params *p)
{
	int	r;
	int	c;

	flood_fill(p, p->player_row, p->player_col);
	r = 0;
	while (r < p->map_rows)
	{
		c = 0;
		while (c < p->map_cols)
		{
			if (ft_strchr("CEP", p->map[r][c]) != NULL)
				return (0);
			c++;
		}
		r++;
	}
	matrix_fill(p->map, p->map_cols, p->ber, NULL);
	return (1);
}
