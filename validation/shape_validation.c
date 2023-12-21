/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:55:56 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/29 17:31:21 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	shape_validation(t_params *p)
{
	int	r;

	r = 0;
	while (r < p->map_rows)
	{
		if (ft_strlen(p->map[r]) != p->map_cols)
			return (0);
		r++;
	}
	return (1);
}
