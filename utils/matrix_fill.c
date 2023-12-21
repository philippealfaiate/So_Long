/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:21:57 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/03 19:42:35 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/solong.h"

void	matrix_fill(char **matrix, int cols, char *data, char *charset)
{
	int	i;
	int	row;
	int	col;

	i = 0;
	while (data[i] != '\0')
	{
		row = compute_row(i, cols);
		col = compute_col(i, cols);
		if (charset != NULL && matrix[row][col] == charset[0])
			matrix[row][col] = charset[1];
		else
			matrix[row][col] = data[i];
		i++;
	}
	return ;
}
