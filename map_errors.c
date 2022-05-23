/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:31:41 by mthiesso          #+#    #+#             */
/*   Updated: 2022/05/23 13:58:16 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*void	check_errors(t_map *vars)
{

}*/

int	extension_errors(t_map	*vars, char *map_name)
{
	int	map_len;

	map_len = ft_strlen(map_name);
	if (map_name[map_len - 1] != 'r' || map_name[map_len - 2] != 'e'
		|| map_name[map_len - 3] != 'b' || map_name[map_len - 4] != '.')
	{			
		write(1, "MAP FILE ERROR\n", 15);
		return (EXIT_FAILURE);
	}
	return (0);
}

int	non_unique_error(t_map *vars, char unique_symbol)
{
	int		i;
	int 	j;
	int 	counter;
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
			{
				if (counter == 0)
					counter++;
				else
					return (1);
			}
			j++;	
		}
		i++;
	}
	return (0);
}

int	player_error(t_map *vars)
{
	return (non_unique_error(vars, 'P'));
}

int	exit_error(t_map *vars)
{
	return (non_unique_error(vars, 'E'));
}