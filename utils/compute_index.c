/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:57:42 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/20 16:01:50 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

int	compute_index(int col, int row, int map_cols)
{
	return (row * map_cols + col);
}
