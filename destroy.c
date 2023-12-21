/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:23:36 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/26 16:20:23 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

/**
 * 
*/
void	destroy_map(t_params *p)
{
	int	r;

	if (p->ber != NULL)
		free(p->ber);
	if (p->map != NULL)
	{
		r = 0;
		while (r < p->map_rows)
		{
			if (p->map[r] != NULL)
				free(p->map[r]);
			r++;
		}
		free(p->map);
	}
}

/**
 * 
*/
void	destroy_display(t_params *p)
{
	if (p->spr_framet != NULL)
		mlx_destroy_image(p->mlx, p->spr_framet);
	if (p->spr_frameb != NULL)
		mlx_destroy_image(p->mlx, p->spr_frameb);
	if (p->spr_frames != NULL)
		mlx_destroy_image(p->mlx, p->spr_frames);
	if (p->spr_wll != NULL)
		mlx_destroy_image(p->mlx, p->spr_wll);
	if (p->spr_grd != NULL)
		mlx_destroy_image(p->mlx, p->spr_grd);
	if (p->spr_col != NULL)
		mlx_destroy_image(p->mlx, p->spr_col);
	if (p->spr_plr != NULL)
		mlx_destroy_image(p->mlx, p->spr_plr);
	if (p->spr_ext != NULL)
		mlx_destroy_image(p->mlx, p->spr_ext);
	if (p->spr_qit != NULL)
		mlx_destroy_image(p->mlx, p->spr_qit);
	if (p->win != NULL)
		mlx_destroy_window(p->mlx, p->win);
	if (p->mlx != NULL)
	{
		mlx_destroy_display(p->mlx);
		free(p->mlx);
	}
}

/**
 * 
*/
int	destroy_all(t_params *p)
{
	mlx_do_key_autorepeaton(p->mlx);
	destroy_map(p);
	destroy_display(p);
	params_init(p);
	exit(0);
	return (0);
}

/**
 * 
*/
int	destroy_quit(t_params *p)
{
	print_quit();
	return (destroy_all(p));
}
