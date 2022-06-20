/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:18:32 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/16 20:58:59 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_game(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->nb_line_map)
	{
		free(map->tableau[i]);
		i++;
	}
	free(map->tableau);
	free (map);
	exit(EXIT_SUCCESS);
}
