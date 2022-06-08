/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_loading.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 22:04:37 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/08 22:58:50 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_load(t_map *map)
{
	int		i;
	int		j;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	map->pingu = malloc(sizeof(t_img));
	map->pingu->img_path = "asset/exit_op.xpm";
	map->pingu->img_name = mlx_xpm_file_to_image(map->mlx, map->pingu->img_path, &map->pingu->img_width, &map->pingu->img_height);
	while (i < map->nb_line_map)
	{
		j = 0;
		x = 0;
		while (map->tableau[i][j])
		{
				mlx_put_image_to_window(map->mlx, map->win, map->pingu->img_name, x, y);
			/*if (map->tableau[i][j] == '1')
			{
				write(1, "TEST\n", 6);
				map->pingu->img_name = mlx_xpm_file_to_image(map->mlx, map->pingu->img_path, &map->pingu->img_width, &map->pingu->img_height);
				mlx_put_image_to_window(map->mlx, map->win, map->pingu->img_name, 0, 0);
				write(1, "TEST2\n", 7);
			}*/
			j++;
			x += 32;
		}
		i++;
		y += 32;
	}
}
