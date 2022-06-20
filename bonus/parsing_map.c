/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:23:44 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/16 19:54:56 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	nb_line_map(char **map_name)
{
	int		fd;
	int		nb_line_map;
	char	*tmp;

	nb_line_map = 0;
	fd = open(*map_name, O_RDONLY);
	tmp = get_next_line(fd);
	while (tmp)
	{
		free(tmp);
		tmp = get_next_line(fd);
		nb_line_map++;
	}
	close(fd);
	return (nb_line_map);
}

int	read_map(t_map *vars, char **map_name)
{
	int		i;
	int		fd;
	char	*line;

	if (extension_errors(*map_name) == 1)
		return (EXIT_FAILURE);
	fd = open(*map_name, O_RDONLY);
	i = -1;
	vars->nb_line_map = nb_line_map(map_name);
	if (vars->nb_line_map == 0)
	{
		write (1, "Error:\nEMPTY_MAP\n", 17);
		return (EXIT_FAILURE);
	}
	vars->tableau = malloc(sizeof(char *) * vars->nb_line_map + 1);
	while (++i < vars->nb_line_map)
	{
		line = get_next_line(fd);
		vars->tableau[i] = ft_strdup(line);
		free(line);
	}
	close(fd);
	if (check_errors(vars))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
