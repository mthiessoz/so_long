/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:35:06 by marlene           #+#    #+#             */
/*   Updated: 2021/11/08 15:59:43 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1_char;
	const unsigned char	*str2_char;
	unsigned int		i;

	i = 0;
	str1_char = str1;
	str2_char = str2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && *str1_char == *str2_char)
	{
		i++;
		str1_char++;
		str2_char++;
	}
	if (i == n)
	{
		str1_char--;
		str2_char--;
	}
	return (*str1_char - *str2_char);
}

/*int main(int argc, char **argv)
{
    (void)    argc;
    (void)     argv;
    char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	size_t size = 4;

    printf("Valeur de retour : %d", ft_memcmp(s1, s2, size));
}*/