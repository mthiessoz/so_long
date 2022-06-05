/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:11:02 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/05 21:59:55 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	walls_errors(t_map *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < vars->len_line - 1)
	{
		if (vars->tableau[0][j] != '1' ||
			vars->tableau[vars->nb_line_map - 1][j] != '1')
		{
			write(1, "WALL_ERROR\n", 12);
			return (EXIT_FAILURE);
		}
		if (vars->tableau[i][0] != '1' ||
			vars->tableau[i][vars->len_line - 2] != '1')
		{
			write(1, "WALLS_ERROR\n", 12);
			return (EXIT_FAILURE);
		}
		if (j < vars->len_line - 1)
			j++;
		if (i < vars->nb_line_map - 1)
			i++;
	}
}
