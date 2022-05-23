/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:35:06 by marlene           #+#    #+#             */
/*   Updated: 2021/11/08 15:59:54 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_char;
	const unsigned char	*src_char;

	i = 0;
	dest_char = dest;
	src_char = src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*dest_char = *src_char;
		i++;
		dest_char++;
		src_char++;
	}
	return (dest);
}
