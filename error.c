/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:10:12 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/06 11:15:22 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

/**
 * 
*/
void	*print_error(char *err_msg, char *strerr_msg)
{
	write(2, "Error\n", ft_strlen("Error\n"));
	write(2, err_msg, ft_strlen(err_msg));
	if (strerr_msg != NULL)
	{
		write(2, ": ", ft_strlen(": "));
		write(2, strerr_msg, ft_strlen(strerr_msg));
	}
	write(2, "\n", 1);
	return (NULL);
}

/**
 * 
*/
void	exit_if(int state, char *err_msg, t_params *p)
{
	if (!state)
		return ;
	if (err_msg != NULL)
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		write(2, err_msg, ft_strlen(err_msg));
		write(2, "\n", 1);
	}
	if (p != NULL)
	{
		destroy_map(p);
		destroy_display(p);
	}
	exit(EXIT_FAILURE);
}

/**
 * 
*/
void	exit_if2(int state, char *err_msg, t_params *p, void *ptr)
{
	if (ptr != NULL)
		free(ptr);
	if (!state)
		return ;
	if (err_msg != NULL)
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		write(2, err_msg, ft_strlen(err_msg));
		write(2, "\n", 1);
	}
	if (p != NULL)
	{
		destroy_map(p);
		destroy_display(p);
	}
	exit(EXIT_FAILURE);
}
