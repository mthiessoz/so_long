/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:47:39 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/15 16:30:37 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbwords(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int	ft_size(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		count;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_nbwords(s, c);
	ptr = ft_calloc(count + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	while (i < count)
	{
		while (*s == c && *s)
			s++;
		ptr[i] = ft_substr((char *)s, 0, ft_size((char *)s, c));
		s = s + ft_size((char *)s, c);
		i++;
	}
	ptr[count] = 0;
	return (ptr);
}
