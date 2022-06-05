/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:14:10 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/05 18:56:23 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_errors(t_map *vars, char *tmp)
{
	extension_errors(vars, tmp);
	player_error(vars);
	exit_error(vars);
	rectangle_error(vars);
	walls_errors(vars);
}
