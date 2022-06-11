/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:43:51 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/11 15:29:12 by mthiesso         ###   ########.fr       */
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

typedef struct s_img
{
	void	*img_name;
	char	*img_path;
	int		img_width;
	int		img_height;
	int		img_x;
	int		img_y;
}				t_img;

typedef struct s_map
{
	void	*mlx;
	void	*win;
	char	**tableau;
	int		nb_line_map;
	int		map_len;
	int		len_line;
	t_img	*wall;
	t_img	*snow;
	t_img	*perso;
	t_img	*coin;
	t_img	*cd_exit;
	t_img	*op_exit;
}				t_map;

int				read_map(t_map *vars, char **map);
void			check_errors(t_map *vars, char *tmp);
void			map_load(t_map *map);
int				start_game(t_map *map, char *s);
void			img_init(t_map *map);
void			map_init(t_map *map);
void			exit_game(t_map *map);
void			create_map(t_map *map);
void			what_img(t_map *map, char c, int x, int y);

int				nb_line_map(char **map);
int				extension_errors(t_map *vars, char *map_name);
int				non_unique_error(t_map *vars, char unique_symbol);
int				player_error(t_map *vars);
int				exit_error(t_map *vars);
int				rectangle_error(t_map *vars);
int				walls_errors(t_map *vars);

#endif