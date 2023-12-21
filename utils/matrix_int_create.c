/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_int_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:21:57 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/22 17:12:01 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

int	**matrix_int_create(int rows, int cols)
{
	int	**matrix;
	int	i;

	matrix = malloc(sizeof(int *) * rows);
	if (matrix == NULL)
		free(matrix);
	i = 0;
	while (i < rows && matrix != NULL)
	{
		matrix[i] = malloc(sizeof(int) * cols);
		if (matrix[i] == NULL)
			matrix = (int **) matrix_rollback((void **) matrix, i);
		i++;
	}
	return (matrix);
}
