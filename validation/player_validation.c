/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:43:26 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/20 17:16:33 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	player_validation(t_params *p)
{
	int	count;
	int	r;
	int	c;

	count = 0;
	r = 0;
	while (r < p->map_rows)
	{
		c = 0;
		while (c < p->map_cols)
		{
			if (p->map[r][c] == 'P')
				count++;
			c++;
		}
		r++;
	}
	return (count == 1);
}
