/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:43:26 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/20 17:45:43 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	size_validation(t_params *p)
{
	if (p->map_cols < D_COLS || p->map_rows < D_ROWS)
		return (0);
	return (1);
}
