/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:36:59 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/10 17:14:08 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char const *s1, char const *set)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (set[i])
	{
		if (s1[y] == set[i])
		{
			return (1);
		}
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;
	int	start;

	if (!s1)
		return (0);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_set(&s1[start], set) == 1 && s1[start])
	{
		start++;
	}
	while (ft_set(&s1[end], set) == 1 && end > 0)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start + 1));
}
