/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:57:49 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/14 18:20:21 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	extension_errors(char *map_name)
{
	int	map_len;

	map_len = ft_strlen(map_name);
	if (map_name[map_len - 1] != 'r' || map_name[map_len - 2] != 'e'
		|| map_name[map_len - 3] != 'b' || map_name[map_len - 4] != '.')
	{			
		write(1, "MAP_FILE_ERROR\n", 15);
		return (EXIT_FAILURE);
	}
	return (0);
}

int	not_map_symbol(t_map *map)
{
	int			i;
	size_t		j;
	char		symbol;

	i = 0;
	while (i < map->nb_line_map)
	{
		j = 0;
		while (j < ft_strlen(map->tableau[i]))
		{
			symbol = map->tableau[i][j];
			if (symbol == '1' || symbol == 'E' || symbol == '0'
				|| symbol == 'C' || symbol == 'P' || symbol == '\n')
				j++;
			else
			{
				write(1, "WRONG_SYMBOL_MAP\n", 17);
				return (EXIT_FAILURE);
			}
		}
		i++;
	}
	return (EXIT_SUCCESS);
}

int	size_map(t_map *map)
{
	if (map->nb_line_map > 40 || map->len_line > 70)
	{
		write (1, "MAP_TOO_BIG\n", 12);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
