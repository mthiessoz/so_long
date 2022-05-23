/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:43:51 by mthiesso          #+#    #+#             */
/*   Updated: 2022/05/22 19:00:05 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
# include "./mlx/mlx.h"
//# include "get_next_line.h"

typedef struct s_map
{
	void	*mlx;
	void	*win;
	char	**tableau;
	int		nb_line_map;
	int		map_len;
}				t_map;

void			read_map(t_map *vars, char **map);
int				nb_line_map(char **map);

int				extension_errors(t_map *vars, char *map_name);
int				non_unique_error(t_map *vars, char unique_symbol);
int				player_error(t_map *vars);
int				exit_error(t_map *vars);
#endif