/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:31:41 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/15 16:27:10 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	non_unique_error(t_map *vars, char unique_symbol)
{
	int		i;
	size_t	j;
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
		write(1, "Error:\nPLAYER_ERROR\n", 21);
		return (EXIT_FAILURE);
	}
	else
		return (0);
}

int	item_error(t_map *vars)
{
	vars->coin_number = non_unique_error(vars, 'C');
	if (non_unique_error(vars, 'C') < 1)
	{
		write(1, "Error:\nITEM_ERROR\n", 19);
		return (EXIT_FAILURE);
	}
	else
		return (0);
}

int	exit_error(t_map *vars)
{
	if (non_unique_error(vars, 'E') != 1)
	{
		write(1, "Error:\nEXIT_ERROR\n", 19);
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
			+ (ft_strichr(vars->tableau[i], '\n') == -1)
			!= (unsigned long)vars->len_line)
		{
			write(1, "Error:\nNOT_RECTANGLE_MAP_ERROR\n", 31);
			return (EXIT_FAILURE);
		}
		i++;
	}
	return (0);
}
