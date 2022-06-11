/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:14:10 by mthiesso          #+#    #+#             */
/*   Updated: 2022/06/11 16:50:35 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_errors(t_map *vars, char *tmp)
{
	if (extension_errors(vars, tmp) == 1)
		return (EXIT_FAILURE);
	if (player_error(vars) == 1)
		return (EXIT_FAILURE);
	if (exit_error(vars) == 1)
		return (EXIT_FAILURE);
	if (rectangle_error(vars) == 1)
		return (EXIT_FAILURE);
	if (walls_errors(vars) == 1)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}
