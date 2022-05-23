/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:53:21 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/08 14:22:28 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
