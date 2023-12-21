/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ber_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:14:04 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/20 17:02:03 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

/**
 * 
*/
int	ber_validation(char *filename)
{
	int		len_file;

	if (filename == NULL)
		return (0);
	len_file = ft_strlen(filename);
	if (ft_strncmp(filename + (len_file - 4), ".ber", 4) != 0)
		return (0);
	return (1);
}
