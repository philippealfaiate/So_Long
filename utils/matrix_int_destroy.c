/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_int_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:21:57 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/21 18:39:31 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

void	matrix_int_destroy(int ***matrix, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	matrix = NULL;
}
