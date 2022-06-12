/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:51:10 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/12 19:11:41 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_move(t_map *map, int move_x, int move_y)
{
	if ((map->tableau[(map->perso->img_y / 32) + move_y]
			[(map->perso->img_x / 32) + move_x]) == '1')
		return (0);
	else if ((map->tableau[(map->perso->img_y / 32) + move_y]
			[(map->perso->img_x / 32) + move_x]) == 'E'
		&& map->coin_number == 0)
		exit_game(map);
	else if ((map->tableau[(map->perso->img_y / 32) + move_y]
			[(map->perso->img_x / 32) + move_x]) == 'E'
		&& map->coin_number != 0)
		return (0);
	else if ((map->tableau[(map->perso->img_y / 32) + move_y]
			[(map->perso->img_x / 32) + move_x]) == 'C')
	{
		map->tableau[(map->perso->img_y / 32) + move_y]
		[(map->perso->img_x / 32) + move_x] = '0';
		map->coin_number--;
		if (map->coin_number == 0)
			mlx_put_image_to_window(map->mlx, map->win, map->op_exit->img_name,
				map->op_exit->img_x, map->op_exit->img_y);
	}
	return (1);
}
