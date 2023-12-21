/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:39:42 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/05 12:37:51 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

/**
 * 
*/
int	ctl_core(int keycode, t_params *p)
{
	if (keycode == XK_Escape)
	{
		print_quit();
		destroy_all(p);
		return (0);
	}
	if (keycode == XK_Left || keycode == XK_A || keycode == XK_a)
		return (ctl_motion(p, -1, 0));
	if (keycode == XK_Right || keycode == XK_D || keycode == XK_d)
		return (ctl_motion(p, 1, 0));
	if (keycode == XK_Up || keycode == XK_W || keycode == XK_w)
		return (ctl_motion(p, 0, -1));
	if (keycode == XK_Down || keycode == XK_S || keycode == XK_s)
		return (ctl_motion(p, 0, 1));
	if (keycode == XK_P || keycode == XK_p)
	{
		p->speed = !p->speed;
		if (p->speed)
			mlx_do_key_autorepeaton(p->mlx);
		else
			mlx_do_key_autorepeatoff(p->mlx);
		return (0);
	}
	return (0);
}

/**
 * 
*/
int	ctl_motion(t_params *p, int col, int row)
{
	if (!ctl_autorized(p, col, row))
		return (0);
	if (p->map[p->player_row + row][p->player_col + col] == 'E' && p->exitable)
		p->exit--;
	if (p->map[p->player_row + row][p->player_col + col] == 'C')
	{
		p->collectibles--;
		if (p->collectibles == 0)
			p->exitable = 1;
	}
	p->map[p->player_row][p->player_col] = p->backdrop;
	if (p->map[p->player_row + row][p->player_col + col] == 'E')
		p->backdrop = 'E';
	else
		p->backdrop = '0';
	p->player_col += col;
	p->player_row += row;
	p->map[p->player_row][p->player_col] = 'P';
	p->moves++;
	print_moves(p, "You made ", NULL);
	return (0);
}

/**
 * 
*/
int	ctl_autorized(t_params *p, int col, int row)
{
	int	n_col;
	int	n_row;

	n_col = p->player_col + col;
	n_row = p->player_row + row;
	if (n_col <= 0 || n_col >= p->map_cols)
		return (0);
	if (n_row <= 0 || n_row >= p->map_rows)
		return (0);
	if (p->map[n_row][n_col] == '1')
		return (0);
	return (1);
}
