/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charset_validation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:56:26 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/28 11:12:02 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	charset_validation(t_params *p)
{
	int	i;

	i = 0;
	while (p->ber)
	{
		if (ft_strchr("01CEP\n", p->ber[i]) == NULL)
			return (0);
		i++;
	}
	return (1);
}
