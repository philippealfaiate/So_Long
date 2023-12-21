/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:41:36 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/06 11:22:02 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

/**
 * 
*/
int	main(int argc, char *argv[])
{
	int			fd;
	t_params	p;

	exit_if(!argc_validation(argc, 2), ERR_ARG, NULL);
	exit_if(!ber_validation(argv[1]), ERR_BER, NULL);
	fd = open(argv[1], O_RDONLY);
	exit_if(fd == -1, strerror(errno), NULL);
	params_map_set(params_init(&p), fd);
	close(fd);
	map_validation(&p);
	print_welcome();
	params_display_set(&p);
	mlx_do_key_autorepeatoff(p.mlx);
	mlx_loop_hook(p.mlx, &display_game_render, &p);
	mlx_hook(p.win, KeyPress, KeyPressMask, &ctl_core, &p);
	mlx_hook(p.win, DestroyNotify, StructureNotifyMask, &destroy_quit, &p);
	mlx_loop(p.mlx);
	destroy_map(&p);
	return (0);
}
