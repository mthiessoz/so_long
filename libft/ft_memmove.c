/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:57:02 by marlene           #+#    #+#             */
/*   Updated: 2021/11/08 16:00:01 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_char;
	const unsigned char	*src_char;

	if (src > dest)
	{
		return (ft_memcpy(dest, src, n));
	}
	i = n;
	if (!dest && !src)
		return (NULL);
	src_char = src + n - 1;
	dest_char = dest + n - 1;
	while (i > 0)
	{
		*dest_char = *src_char;
		i--;
		dest_char--;
		src_char--;
	}
	return (dest);
}

/*int main(int argc, char **argv)
{
    (void)    argc;
    (void)     argv;
    char dst1[0xF0];
	char dst2[0xF0];
	char *data = "thiÃ Ã\xde\xad\xbe\xeftriÃ±g will be Ã¸vÃ©rlapÃ©d !\r\n";
	int size = 0xF0 - 0xF;

    ft_memmove(dst2, dst2 + 3, size);
}*/