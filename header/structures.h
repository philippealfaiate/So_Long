/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:16:07 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/05 12:16:22 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_params
{
	int		map_cols;
	int		map_rows;
	char	*ber;
	void	*mlx;
	void	*win;
	void	*img;
	char	**map;
	char	*analogic_map;
	int		moves;
	int		collectibles;
	int		exit;
	int		exit_col;
	int		exit_row;
	int		exitable;
	int		player_col;
	int		player_row;
	int		speed;
	char	backdrop;
	void	*spr_framet;
	void	*spr_frames;
	void	*spr_frameb;
	void	*spr_wll;
	void	*spr_grd;
	void	*spr_col;
	void	*spr_plr;
	void	*spr_ext;
	void	*spr_qit;
}	t_params;

#endif
