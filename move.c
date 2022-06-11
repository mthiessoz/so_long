/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:34:01 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/11 17:30:12 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	where_to_go(int keycode, t_map *map)
{
	printf("%d\n", keycode);
	if (keycode == 53)
		exit(0);
	else if (keycode == 13)
		up_move(map, keycode);
	else if (keycode == 0)
		left_move(map, keycode);
	else if (keycode == 1)
		down_move(map, keycode);
	else if (keycode == 2)
		right_move(map, keycode);
	return (EXIT_SUCCESS);
}

int	up_move(t_map *map, int keycode)
{
	mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name,
		(map->perso->img_x), (map->perso->img_y));
	map->perso->img_y -= 32;
	mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name,
		map->perso->img_x, map->perso->img_y);
	return (EXIT_SUCCESS);
}

int	left_move(t_map *map, int keycode)
{
	mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name,
		(map->perso->img_x), (map->perso->img_y));
	map->perso->img_x -= 32;
	mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name,
		map->perso->img_x, map->perso->img_y);
	return (EXIT_SUCCESS);
}

int	down_move(t_map *map, int keycode)
{
	mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name,
		(map->perso->img_x), (map->perso->img_y));
	map->perso->img_y += 32;
	mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name,
		map->perso->img_x, map->perso->img_y);
	return (EXIT_SUCCESS);
}

int	right_move(t_map *map, int keycode)
{
	mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name,
		(map->perso->img_x), (map->perso->img_y));
	map->perso->img_x += 32;
	mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name,
		map->perso->img_x, map->perso->img_y);
	return (EXIT_SUCCESS);
}
