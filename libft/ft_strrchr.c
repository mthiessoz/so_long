/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:52:49 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/01 17:29:48 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str) - 1;
	if (!str)
		return (NULL);
	if (!c || c == '\0')
		return ((char *)str + (i + 1));
	while (i >= 0)
	{
		if ((char) str[i] == (char) c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
