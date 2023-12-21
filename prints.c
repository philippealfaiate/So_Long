/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:38:38 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/06 11:02:10 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

/**
 * 
*/
void	print_welcome(void)
{
	clear_scren();
	ft_putstr_fd("\e[47m                                \e[0m\n", 1);
	ft_putstr_fd("\e[47m              \e[31mbrik\e[47m              \e[0m\n", 1);
	ft_putstr_fd("\e[47m                                \e[0m\n\n", 1);
	ft_putstr_fd("Playing control keys:\n", 1);
	ft_putstr_fd("[w]↑\t[s]↓\t[a]←\t[d]→\n", 1);
	ft_putstr_fd("[p] speed up/down the player\n", 1);
	ft_putstr_fd("[esc] to quit brik\n", 1);
}

/**
 * 
*/
void	print_quit(void)
{
	clear_scren();
	ft_putstr_fd("\e[47m                                \e[0m\n", 1);
	ft_putstr_fd("\e[47m              \e[31mbrik\e[47m              \e[0m\n", 1);
	ft_putstr_fd("\e[47m                                \e[0m\n\n", 1);
	ft_putstr_fd("You quitted brik\nwithout trying to win?\n\n", 1);
	ft_putstr_fd("\e[41m You are a LOSER :/ \e[0m\n\n", 1);
}

/**
 * 
*/
void	print_win(int moves)
{
	char	*m;

	m = ft_itoa(moves);
	clear_scren();
	ft_putstr_fd("\e[47m                                \e[0m\n", 1);
	ft_putstr_fd("\e[47m              \e[31mbrik\e[47m              \e[0m\n", 1);
	ft_putstr_fd("\e[47m                                \e[0m\n\n", 1);
	ft_putstr_fd("You win brik in ", 1);
	ft_putstr_fd(m, 1);
	ft_putstr_fd(" move", 1);
	if (moves > 1)
		write(1, "s", 1);
	ft_putstr_fd("\n\n", 1);
	ft_putstr_fd("\e[42m CONGRATS Buddy ;) \e[0m\n\n", 1);
	free(m);
}
