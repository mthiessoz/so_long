/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:03:09 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/11 16:51:25 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	start_game(t_map *map, char *s)
{
	if (read_map(map, &s) == 1)
		return (EXIT_FAILURE);
	img_init(map);
	map_init(map);
	if (check_errors(map, s) == 1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
