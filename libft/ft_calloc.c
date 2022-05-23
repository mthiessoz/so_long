/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:31:43 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/08 15:48:42 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*dest;

	dest = (char *)malloc (count * size);
	if (!dest)
		return (0);
	if (!size)
		return (dest);
	ft_bzero(dest, (count * size));
	return (dest);
}
