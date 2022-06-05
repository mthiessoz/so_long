/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:31:41 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/05 19:05:49 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	non_unique_error(t_map *vars, char unique_symbol)
{
	int		i;
	int		j;
	int		counter;
	char	symbol;

	i = 0;
	counter = 0;
	while (i < vars->nb_line_map)
	{
		j = 0;
		while (j < ft_strlen(vars->tableau[i]))
		{
			symbol = vars->tableau[i][j];
			if (symbol == unique_symbol)
				counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

int	player_error(t_map *vars)
{
	if (non_unique_error(vars, 'P') != 1)
	{
		write(1, "PLAYER_ERROR\n", 14);
		return (EXIT_FAILURE);
	}
	else
		return (0);
}

int	exit_error(t_map *vars)
{
	if (non_unique_error(vars, 'E') != 1)
	{
		write(1, "EXIT_ERROR\n", 12);
		return (EXIT_FAILURE);
	}
	else
		return (0);
}

int	rectangle_error(t_map *vars)
{
	int	i;

	i = 1;
	vars->len_line = ft_strlen(vars->tableau[i]);
	while (i < vars->nb_line_map)
	{
		if (ft_strlen(vars->tableau[i])
			+ (ft_strichr(vars->tableau[i], '\n') == -1) != vars->len_line)
		{
			write(1, "NOT_RECTANGLE_MAP_ERROR\n", 24);
			return (EXIT_FAILURE);
		}
		i++;
	}
	return (0);
}
