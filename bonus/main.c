/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:48:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/15 16:29:07 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_map	map;
	int		i;

	i = 0;
	map.step = 0;
	if (argc != 2)
	{
		write(1, "Error:\nNB_ARG_ERROR\n", 20);
		return (EXIT_FAILURE);
	}
	if (read_map(&map, &argv[1]) == 1)
		exit(0);
	map.mlx = mlx_init();
	if (start_game(&map) == 1)
	{
		exit_game(&map);
		return (EXIT_FAILURE);
	}
	map.win = mlx_new_window(map.mlx, ((map.len_line - 1) * 32),
			(map.nb_line_map * 32), "Snow Pumpkin");
	create_map(&map);
	mlx_hook(map.win, 2, 1L << 0, where_to_go, &map);
	mlx_hook(map.win, 17, 0, &exit_game, &map);
	mlx_loop(map.mlx);
}
