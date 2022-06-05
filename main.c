/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:48:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/05 18:07:25 by mthiesso         ###   ########.fr       */
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
	t_map	vars;
	int		i;

	i = 0;
	if (argc != 2)
	{
		write(1, "NB_ARG_ERROR\n", 7);
		return (0);
	}
	read_map(&vars, &argv[1]);
	check_errors(&vars, argv[1]);
	//vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
	//mlx_hook(vars.win, 2, 1L << 0, ft_close, &vars);
	//mlx_loop(vars.mlx);*/
}
