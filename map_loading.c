/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_loading.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 22:04:37 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/05 23:09:06 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_load(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	map->pingu = malloc(sizeof(t_img));
	map->pingu->img_path = "asset/pingu.xpm";
	while (map->tableau[i])
	{
		j = 0;
		while (map->tableau[i][j])
		{
			if (map->tableau[i][j] == '1')
			{
				write(1, "TEST\n", 6);
				mlx_put_image_to_window(map->mlx, map->win, map->pingu->img_name, 0, 0);
			}
			j++;
		}
		i++;
	}
}
