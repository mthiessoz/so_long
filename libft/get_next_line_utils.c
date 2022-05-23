/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:46:59 by mthiesso          #+#    #+#             */
/*   Updated: 2022/04/06 16:28:42 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	char	*dest;

	i = 0;
	if (!s1 || !s2)
		return (0);
	dest = malloc (sizeof(*dest) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		dest[i] = s2[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, size_t start, size_t end)
{
	char		*substr;
	size_t		counter;
	size_t		size;

	size = end - start + 1;
	substr = (char *) malloc(sizeof(char) * (size + 1));
	counter = 0;
	while (start <= end && s[start] != '\0')
	{
		substr[counter] = s[start];
		counter++;
		start++;
	}
	substr[counter] = '\0';
	return (substr);
}

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*dest;

	i = 0;
	dest = (char *)malloc (sizeof(*dest) * ft_strlen(s1) + 1);
	if (!dest)
		return (0);
	while (*s1)
	{
		dest[i] = *s1;
		i++;
		s1++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
