/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:43:38 by marlene           #+#    #+#             */
/*   Updated: 2021/11/08 15:59:33 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int		i;
	const unsigned char	*str_char;

	i = 0;
	str_char = (const unsigned char *) str;
	while (i < n)
	{
		if (str_char[i] == (unsigned char) c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int main(int argc, char **argv)
{
    (void)    argc;
    (void)     argv;
    char *src = "/|\x12\xff\x09\x42\2002\42|\\";
	int size = 10;
    int   c = '\\200';
    unsigned char   *result = (unsigned char *) ft_memchr(src, c, size);

	printf("Valeur de retour : %c", *result);
}*/