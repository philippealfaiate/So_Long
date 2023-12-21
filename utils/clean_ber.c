/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:38:23 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/03 19:40:43 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
// void	clean_ber(t_params *p)
// {
// 	int		r;
// 	int		offset;
// 	char	*str;

// 	offset = 0;
// 	r = 0;
// 	str = p->ber;
// 	while (r < p->map_rows)
// 	{
// 		ft_memcpy(str + offset, p->map[r], ft_strlen(p->map[r]));
// 		offset += ft_strlen(p->map[r]);
// 		r++;
// 	}
// 	ft_memcpy(str + offset, "\0", 1);
// }

/**
 * 
*/
void	params_clean_ber(t_params *p)
{
	int		i;
	int		len;
	char	*ber_cpy;

	len = ft_strlen(p->ber);
	i = 0;
	ber_cpy = p->ber;
	while (*ber_cpy)
	{
		if (*ber_cpy == '\n')
		{
			ft_memmove(ber_cpy, (ber_cpy + 1), ft_strlen(ber_cpy) - 1);
			i--;
		}
		i++;
		ber_cpy++;
	}
	while (i < len)
	{
		p->ber[i] = '\0';
		i++;
	}
}
