/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:48:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/05/22 18:59:48 by marlene          ###   ########.fr       */
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
		write(1, "ERROR\n", 7);
		return (0);
	}
	extension_errors(&vars, argv[1]);
	read_map(&vars, &argv[1]);
	int result = player_error(&vars);
	printf("%d\n", result);
	result = exit_error(&vars);
	printf("%d\n", result);
	/*vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
	mlx_hook(vars.win, 2, 1L << 0, ft_close, &vars);
	mlx_loop(vars.mlx);*/
}
