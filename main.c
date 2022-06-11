/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:48:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/11 16:56:25 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(t_map *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	return (0);
}

int	main(int argc, char **argv)
{
	t_map	map;
	int		i;

	i = 0;
	if (argc != 2)
	{
		write(1, "NB_ARG_ERROR\n", 7);
		return (EXIT_FAILURE);
	}
	map.mlx = mlx_init();
	if (start_game(&map, argv[1]) == 1)
	{
		exit_game(&map);
		return (EXIT_FAILURE);
	}
	map.win = mlx_new_window(map.mlx, ((map.len_line - 1) * 32),
			(map.nb_line_map * 32), "Snow Pumpkin");
	create_map(&map);
	mlx_hook(map.win, 2, 1L << 0, where_to_go, &map);
	mlx_loop(map.mlx);
}
