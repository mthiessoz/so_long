/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_loading.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 22:04:37 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/11 12:57:25 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*void	map_load(t_map *map)
{
	int		i;
	int		j;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	map->wall = malloc(sizeof(t_img));
	map->wall->img_path = "asset/wall.xpm";
	map->wall->img_name = mlx_xpm_file_to_image(map->mlx, map->wall->img_path, &map->wall->img_width, &map->wall->img_height);
	while (i < map->nb_line_map)
	{
		j = 0;
		x = 0;
		while (map->tableau[i][j])
		{
			if (map->tableau[i][j] == '1')
			{
				map->wall->img_name = mlx_xpm_file_to_image(map->mlx, map->wall->img_path, &map->wall->img_width, &map->wall->img_height);
				mlx_put_image_to_window(map->mlx, map->win, map->wall->img_name, x, y);
			}
			j++;
			x += 32;
		}
		i++;
		y += 32;
	}
}*/

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
		mlx_put_image_to_window(map->mlx, map->win, map->perso->img_name, x, y);
	else if (c == 'C')
		mlx_put_image_to_window(map->mlx, map->win, map->coin->img_name, x, y);
	else if (c == 'E')
		mlx_put_image_to_window(map->mlx, map->win,
			map->cd_exit->img_name, x, y);
}
