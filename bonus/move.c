/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:34:01 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/14 10:45:56 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	where_to_go(int keycode, t_map *map)
{
	if (keycode == 53)
		exit_game(map);
	else if (keycode == 13)
		up_move(map);
	else if (keycode == 0)
		left_move(map);
	else if (keycode == 1)
		down_move(map);
	else if (keycode == 2)
		right_move(map);
	return (EXIT_SUCCESS);
}

int	up_move(t_map *map)
{
	if (check_move(map, 0, -1) == 0)
	{
		mlx_put_image_to_window(map->mlx, map->win, map->wall->img_name,
			(map->perso->img_x), (map->perso->img_y - 32));
		return (0);
	}
	else
	{
		mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name,
			(map->perso->img_x), (map->perso->img_y));
		map->perso->img_y -= 32;
		mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name,
			map->perso->img_x, map->perso->img_y);
		map->step++;
		nb_step(map);
	}
	return (EXIT_SUCCESS);
}

int	left_move(t_map *map)
{
	if (check_move(map, -1, 0) == 0)
		return (0);
	else
	{
		mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name,
			(map->perso->img_x), (map->perso->img_y));
		map->perso->img_x -= 32;
		mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name,
			map->perso->img_x, map->perso->img_y);
		map->step++;
		nb_step(map);
	}
	return (EXIT_SUCCESS);
}

int	down_move(t_map *map)
{
	if (check_move(map, 0, 1) == 0)
		return (0);
	else
	{
		mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name,
			(map->perso->img_x), (map->perso->img_y));
		map->perso->img_y += 32;
		mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name,
			map->perso->img_x, map->perso->img_y);
		map->step++;
		nb_step(map);
	}
	return (EXIT_SUCCESS);
}

int	right_move(t_map *map)
{
	if (check_move(map, 1, 0) == 0)
		return (0);
	else
	{
		mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name,
			(map->perso->img_x), (map->perso->img_y));
		map->perso->img_x += 32;
		mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name,
			map->perso->img_x, map->perso->img_y);
		map->step++;
		nb_step(map);
	}
	return (EXIT_SUCCESS);
}
