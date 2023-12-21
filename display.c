/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:04:11 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/26 13:54:02 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

/**
 * 
*/
int	display_frame_render(t_params *p)
{
	mlx_put_image_to_window(p->mlx, p->win, p->spr_framet, 0, 0);
	mlx_put_image_to_window(p->mlx, p->win, p->spr_framet, 0, 480);
	mlx_put_image_to_window(p->mlx, p->win, p->spr_frames, 0, 128);
	mlx_put_image_to_window(p->mlx, p->win, p->spr_frames, 512, 128);
	return (1);
}

/**
 * 
*/
int	display_game_render(t_params *p)
{
	int	r;
	int	c;
	int	grid_r;
	int	grid_c;

	display_frame_render(p);
	r = 0;
	while (r < D_ROWS)
	{
		c = 0;
		while (c < D_COLS)
		{
			grid_r = r + grid_loop_start(p, 'R');
			grid_c = c + grid_loop_start(p, 'C');
			sprite_print_brik(p, c, r, p->map[grid_r][grid_c]);
			c++;
		}
		r++;
	}
	if (p->exitable && !p->exit)
	{
		print_win(p->moves);
		destroy_all(p);
	}
	return (1);
}
