/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_rollback.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:58:39 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/14 14:08:25 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

void	**matrix_rollback(void **ptr, int breakpoint)
{
	while (breakpoint)
	{
		if (ptr[breakpoint - 1] != NULL)
			free(ptr[breakpoint - 1]);
		breakpoint--;
	}
	if (ptr != NULL)
		free(ptr);
	return (ptr = NULL);
}
