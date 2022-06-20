/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:08:44 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/16 20:23:36 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_init(t_map *map)
{
			map->wall = malloc(sizeof(t_img));
			map->wall->img_path = "asset/wall.xpm";
			map->snow = malloc(sizeof(t_img));
			map->snow->img_path = "asset/snow.xpm";
			map->perso = malloc(sizeof(t_img));
			map->perso->img_path = "asset/perso.xpm";
			map->coin = malloc(sizeof(t_img));
			map->coin->img_path = "asset/coin.xpm";
			map->cd_exit = malloc(sizeof(t_img));
			map->cd_exit->img_path = "asset/cd_exit.xpm";
			map->op_exit = malloc(sizeof(t_img));
			map->op_exit->img_path = "asset/op_exit.xpm";
			map->monster = malloc(sizeof(t_img));
			map->monster->img_path = "asset/monster.xpm";
}

void	map_init(t_map *map)
{
	map->wall->img_name = mlx_xpm_file_to_image(map->mlx, map->wall->img_path,
			&map->wall->img_width, &map->wall->img_height);
	map->snow->img_name = mlx_xpm_file_to_image(map->mlx, map->snow->img_path,
			&map->snow->img_width, &map->snow->img_height);
	map->perso->img_name = mlx_xpm_file_to_image(map->mlx, map->perso->img_path,
			&map->perso->img_width, &map->perso->img_height);
	map->coin->img_name = mlx_xpm_file_to_image(map->mlx, map->coin->img_path,
			&map->coin->img_width, &map->coin->img_height);
	map->cd_exit->img_name = mlx_xpm_file_to_image(map->mlx,
			map->cd_exit->img_path, &map->cd_exit->img_width,
			&map->cd_exit->img_height);
	map->op_exit->img_name = mlx_xpm_file_to_image(map->mlx,
			map->op_exit->img_path, &map->op_exit->img_width,
			&map->op_exit->img_height);
	map->monster->img_name = mlx_xpm_file_to_image(map->mlx,
			map->monster->img_path, &map->monster->img_width,
			&map->monster->img_height);
}
