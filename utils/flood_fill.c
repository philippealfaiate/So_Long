/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:43:26 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/03 18:39:27 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

void	flood_fill(t_params *p, int r, int c)
{
	if (strchr("C0PE", p->map[r][c]) == NULL)
		return ;
	p->map[r][c] = '1';
	flood_fill(p, r, c - 1);
	flood_fill(p, r, c + 1);
	flood_fill(p, r - 1, c);
	flood_fill(p, r + 1, c);
}
