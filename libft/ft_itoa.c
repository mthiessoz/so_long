/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:56:01 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/11 22:42:15 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(long int n)
{
	int		count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_calcul(long int n)
{
	int		count;
	char	*str;

	count = ft_count(n);
	str = (char *) ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (0);
	if (!n)
	{
		str[0] = '0';
		return (str);
	}
	while (count > 0)
	{
		if (n < 0)
			n *= -1;
		str[count - 1] = n % 10 + 48;
		count--;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;

	nb = n;
	str = ft_calcul(nb);
	if (!str)
		return (0);
	if (nb < 0)
		str[0] = '-';
	str[ft_strlen(str)] = '\0';
	return (str);
}
