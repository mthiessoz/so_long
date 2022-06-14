/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:18:32 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/14 12:12:50 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_game(t_map *map)
{
	free(map->wall);
	free(map->snow);
	free(map->perso);
	free(map->coin);
	free(map->cd_exit);
	free(map->op_exit);
	free(map->tableau);
	exit(0);
}
