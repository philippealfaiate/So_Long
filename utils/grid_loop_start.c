/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_loop_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:28:54 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/22 17:12:20 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	grid_loop_start(t_params *p, char c)
{
	if (c == 'C')
	{
		if (p->player_col - D_COLS / 2 < 0)
			return (0);
		else if (p->player_col - D_COLS / 2 > p->map_cols - D_COLS)
			return (p->map_cols - D_COLS);
		return (p->player_col - D_COLS / 2);
	}
	if (c == 'R')
	{
		if (p->player_row - D_ROWS / 2 < 0)
			return (0);
		else if (p->player_row - D_ROWS / 2 > p->map_rows - D_ROWS)
			return (p->map_rows - D_ROWS);
		return (p->player_row - D_ROWS / 2);
	}
	return (0);
}
