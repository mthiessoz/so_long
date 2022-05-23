/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:26:29 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/09 13:28:12 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
