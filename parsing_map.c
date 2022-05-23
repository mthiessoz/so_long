/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:23:44 by mthiesso          #+#    #+#             */
/*   Updated: 2022/05/22 18:52:29 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	nb_line_map(char **map_name)
{
	int	fd;
	int	nb_line_map;

	nb_line_map = 0;
	fd = open(*map_name, O_RDONLY);
	while (get_next_line(fd) != 0)
	{
		nb_line_map++;
	}
	close(fd);
	return(nb_line_map);
}

void	read_map(t_map *vars, char **map_name)
{
	int		i;
	int		fd;
	char	*line;

	fd = open(*map_name, O_RDONLY);
	i = 0;
	vars->nb_line_map = nb_line_map(map_name);
	vars->tableau = malloc(sizeof(char *) * vars->nb_line_map);
	while (i < vars->nb_line_map)
	{
		line = get_next_line(fd);
		vars->tableau[i] = line;
		i++;
	}
	close(fd);
}
