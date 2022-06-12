/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_loading.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 22:04:37 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/12 18:58:40 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_map(t_map *map)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	while (i < map->nb_line_map)
	{
		x = 0;
		j = 0;
		while (map->tableau[i][j])
		{
			what_img(map, map->tableau[i][j], x, y);
			j++;
			x += 32;
		}
		y += 32;
		i++;
	}
}

void	what_img(t_map *map, char c, int x, int y)
{
	if (c == '1')
		mlx_put_image_to_window(map->mlx, map->win, map->wall->img_name, x, y);
	else if (c == '0')
		mlx_put_image_to_window(map->mlx, map->win, map->snow->img_name, x, y);
	else if (c == 'P')
	{
		map->perso->img_x = x;
		map->perso->img_y = y;
		mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name, x, y);
	}
	else if (c == 'C')
		mlx_put_image_to_window(map->mlx, map->win, map->coin->img_name, x, y);
	else if (c == 'E')
	{
		map->op_exit->img_x = x;
		map->op_exit->img_y = y;
		mlx_put_image_to_window(map->mlx, map->win,
			map->cd_exit->img_name, x, y);
	}
}
