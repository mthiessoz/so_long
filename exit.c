/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:18:32 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/11 16:42:59 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_game(t_map *map)
{
	free(map->wall);
	free(map->snow);
	free(map->perso);
	free(map->coin);
	free(map->cd_exit);
	free(map->op_exit);
}
