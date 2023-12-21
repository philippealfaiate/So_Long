/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:02:34 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/05 12:16:58 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

/**
 * 
*/
t_params	*params_init(t_params *p)
{
	p->ber = NULL;
	p->map_cols = 0;
	p->map_rows = 0;
	p->map = NULL;
	p->moves = 0;
	p->collectibles = 0;
	p->exit = 0;
	p->exitable = 0;
	p->player_col = 0;
	p->player_row = 0;
	p->speed = 0;
	p->backdrop = '0';
	p->mlx = NULL;
	p->win = NULL;
	p->img = NULL;
	p->spr_framet = NULL;
	p->spr_frames = NULL;
	p->spr_frameb = NULL;
	p->spr_wll = NULL;
	p->spr_grd = NULL;
	p->spr_col = NULL;
	p->spr_plr = NULL;
	p->spr_ext = NULL;
	p->spr_qit = NULL;
	return (p);
}

/**
 * 
*/
void	params_destroy(t_params *p)
{
	int	r;

	if (p->ber != NULL)
		free(p->ber);
	if (p->map != NULL)
	{
		r = 0;
		while (r < p->map_rows)
		{
			free(p->map[r]);
			r++;
		}
		free(p->map);
	}
	params_init(p);
}
