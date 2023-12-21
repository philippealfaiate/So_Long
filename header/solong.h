/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:56:43 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/05 11:10:29 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

# include "clib.h"
# include "structures.h"
# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include "prototyping.h"

# define XPM_W "./sprites/xpm/32/black.xpm"
# define XPM_G "./sprites/xpm/32/green.xpm"
# define XPM_C "./sprites/xpm/32/yellow.xpm"
# define XPM_P "./sprites/xpm/32/red.xpm"
# define XPM_E "./sprites/xpm/32/gray.xpm"
# define XPM_Q "./sprites/xpm/32/void.xpm"
# define XPM_FT "./sprites/xpm/32/top.xpm"
# define XPM_FB "./sprites/xpm/32/bottom.xpm"
# define XPM_FS "./sprites/xpm/32/side.xpm"

# define D_SIZE 32
# define D_COLS 15
# define D_ROWS 11

# define WALL '1'
# define GROUND '0'
# define COLLECTIBLE 'C'
# define PLAYER 'P' 
# define EXIT 'E'

# define ERR_ARG "Arguments passed. Usage: ./prog path_to_mapfile.ber"
# define ERR_BER "Wrong file extension, .ber file needed"

# define ERR_MAP "Map not valid"
# define ERR_MAP_CHARSET "Map wrong charset"
# define ERR_MAP_BOND "Map not closed by walls"
# define ERR_MAP_SIZE "Map too small to be loaded"
# define ERR_MAP_SHAPE "Map shape not rectangle"
# define ERR_MAP_PATH "Map path cannot be solved"
# define ERR_MAP_EL "Map with empty lines"
# define ERR_MAP_C "No collectibles found in map"
# define ERR_MAP_P "Player less or more than one"
# define ERR_MAP_E "Exit less or more than one"

# define ERR_MLX "Minilibx can't be init"
# define ERR_WIN "Minilibx window can't be set"
# define ERR_IMG "Minilibx image can't be set"
# define ERR_XPM "Minilibx xpm file can't be set"

#endif
