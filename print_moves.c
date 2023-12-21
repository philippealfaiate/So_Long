/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:38:38 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/06 11:01:04 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/solong.h"

void	print_exit(t_params *p)
{
	int	h;
	int	v;

	h = p->exit_col - p->player_col;
	v = p->exit_row - p->player_row;
	ft_putstr_fd("  Exit ", 1);
	ft_putstr_fd("\e[42m\e[30m", 1);
	if (v < 0)
		ft_putstr_fd(" ↑ ", 1);
	else if (v > 0)
		ft_putstr_fd(" ↓ ", 1);
	else
		ft_putstr_fd(" ↕ ", 1);
	ft_putstr_fd("\e[0m", 1);
	ft_putstr_fd(" ", 1);
	ft_putstr_fd("\e[42m\e[30m", 1);
	if (h < 0)
		ft_putstr_fd(" ← ", 1);
	else if (h > 0)
		ft_putstr_fd(" → ", 1);
	else
		ft_putstr_fd(" ↔ ", 1);
	ft_putstr_fd("\e[0m", 1);
	ft_putstr_fd("\n", 1);
}

/**
 * 
*/
void	print_moves(t_params *p, char *prefix, char *suffix)
{
	char	*moves;
	char	*collects;

	moves = ft_itoa(p->moves);
	collects = ft_itoa(p->collectibles);
	clear_scren();
	ft_putstr_fd("\e[47m                                \e[0m\n", 1);
	ft_putstr_fd("\e[47m              \e[31mbrik\e[47m              \e[0m\n", 1);
	ft_putstr_fd("\e[47m                                \e[0m\n\n", 1);
	if (prefix != NULL)
		ft_putstr_fd(prefix, 1);
	ft_putstr_fd(moves, 1);
	ft_putstr_fd(" move", 1);
	if (p->moves > 1)
		write(1, "s", 1);
	if (suffix != NULL)
		ft_putstr_fd(suffix, 1);
	ft_putstr_fd("\n\n ", 1);
	ft_putstr_fd("Collectibes: ", 1);
	ft_putstr_fd("\e[43m\e[30m ", 1);
	ft_putstr_fd(collects, 1);
	ft_putstr_fd(" \e[0m", 1);
	print_exit(p);
	free(moves);
	free(collects);
}
