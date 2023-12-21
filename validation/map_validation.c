/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:43:26 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/05 11:05:06 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

void	map_validation(t_params *p)
{
	exit_if(!shape_validation(p), ERR_MAP_SHAPE, p);
	exit_if(!bounderies_validation(p), ERR_MAP_BOND, p);
	exit_if(!size_validation(p), ERR_MAP_SIZE, p);
	exit_if(!collectible_validation(p), ERR_MAP_C, p);
	exit_if(!player_validation(p), ERR_MAP_P, p);
	exit_if(!exit_validation(p), ERR_MAP_E, p);
	exit_if(!path_validation(p), ERR_MAP_PATH, p);
}
