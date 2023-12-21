/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params_core.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:02:34 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/05 13:11:10 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

void	map_game_set(t_params *p)
{
	int	r;
	int	c;

	r = 0;
	while (r < p->map_rows)
	{
		c = 0;
		while (c < p->map_cols)
		{
			if (p->map[r][c] == 'C')
				p->collectibles++;
			if (p->map[r][c] == 'E')
			{
				p->exit_col = c;
				p->exit_row = r;
			}
			if (p->map[r][c] == 'P')
			{
				p->player_col = c;
				p->player_row = r;
			}
			c++;
		}
		r++;
	}
}

/**
 * 
*/
t_params	*params_map_set(t_params *p, int fd)
{
	map_parser(p, fd);
	p->map = ft_split(p->ber, '\n');
	map_game_set(p);
	p->exit = 1;
	params_clean_ber(p);
	return (p);
}

/**
 * 
*/
t_params	*params_display_set(t_params *p)
{
	p->mlx = mlx_init();
	exit_if(p->mlx == NULL, ERR_MLX, p);
	p->win = mlx_new_window(p->mlx,
			(D_COLS + 2) * D_SIZE, (D_ROWS + 5) * D_SIZE, "Brik");
	exit_if(p->win == NULL, ERR_WIN, p);
	p->spr_framet = sprite_image_set(p, XPM_FT, 17 * D_SIZE, 4 * D_SIZE);
	exit_if(p->spr_framet == NULL, ERR_IMG, p);
	p->spr_frames = sprite_image_set(p, XPM_FS, D_SIZE, 11 * D_SIZE);
	exit_if(p->spr_frames == NULL, ERR_IMG, p);
	p->spr_frameb = sprite_image_set(p, XPM_FB, 177 * D_SIZE, D_SIZE);
	exit_if(p->spr_frameb == NULL, ERR_IMG, p);
	p->spr_wll = sprite_image_set(p, XPM_W, D_SIZE, D_SIZE);
	exit_if(p->spr_wll == NULL, ERR_IMG, p);
	p->spr_grd = sprite_image_set(p, XPM_G, D_SIZE, D_SIZE);
	exit_if(p->spr_grd == NULL, ERR_IMG, p);
	p->spr_col = sprite_image_set(p, XPM_C, D_SIZE, D_SIZE);
	exit_if(p->spr_col == NULL, ERR_IMG, p);
	p->spr_plr = sprite_image_set(p, XPM_P, D_SIZE, D_SIZE);
	exit_if(p->spr_plr == NULL, ERR_IMG, p);
	p->spr_ext = sprite_image_set(p, XPM_E, D_SIZE, D_SIZE);
	exit_if(p->spr_ext == NULL, ERR_IMG, p);
	p->spr_qit = sprite_image_set(p, XPM_Q, D_SIZE, D_SIZE);
	exit_if(p->spr_qit == NULL, ERR_IMG, p);
	return (p);
}
