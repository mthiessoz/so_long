/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:57:49 by mthiesso          #+#    #+#             */
/*   Updated: 2022/05/31 11:58:23 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	extension_errors(t_map	*vars, char *map_name)
{
	int	map_len;

	map_len = ft_strlen(map_name);
	if (map_name[map_len - 1] != 'r' || map_name[map_len - 2] != 'e'
		|| map_name[map_len - 3] != 'b' || map_name[map_len - 4] != '.')
	{			
		write(1, "MAP_FILE_ERROR\n", 15);
		return (EXIT_FAILURE);
	}
	return (0);
}
