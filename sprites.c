/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:50:08 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/21 18:05:30 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

/**
 * 
*/
void	*sprite_image_set(t_params *p, char *xpm, int width, int height)
{
	int	fd;

	fd = open(xpm, O_RDONLY);
	if (fd == -1)
		return (NULL);
	close(fd);
	return (mlx_xpm_file_to_image(p->mlx, xpm, &width, &height));
}

/**
 * 
*/
int	sprite_print_brik(t_params *p, int c, int r, char charset)
{
	int		x;
	int		y;
	void	*img_ptr;

	x = (c + 1) * D_SIZE;
	y = (r + 4) * D_SIZE;
	if (charset == (int) '1')
		img_ptr = p->spr_wll;
	if (charset == (int) '0')
		img_ptr = p->spr_grd;
	if (charset == (int) 'C')
		img_ptr = p->spr_col;
	if (charset == (int) 'P')
		img_ptr = p->spr_plr;
	if (charset == (int) 'E' && p->exitable == 0)
		img_ptr = p->spr_ext;
	if (charset == (int) 'E' && p->exitable == 1)
		img_ptr = p->spr_qit;
	return (mlx_put_image_to_window(p->mlx, p->win, img_ptr, x, y));
}
