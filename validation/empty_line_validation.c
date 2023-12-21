/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_line_validation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:56:26 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/28 11:08:05 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	empty_line_validation(t_params *p)
{
	int	i;

	i = 0;
	while (p->ber[i])
	{
		if (p->ber[i] == '\n' && p->ber[i + 1] == '\n')
			return (0);
		i++;
	}
	return (1);
}
