/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_printnbr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:12:58 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/29 15:12:20 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	unsigned int	ft_count(unsigned long int n)
{
	unsigned int		count;

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

static char	*ft_calcul(unsigned long int n)
{
	unsigned int		count;
	char				*str;

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

char	*ft_uitoa(unsigned int n)
{
	char				*str;
	unsigned long int	nb;

	nb = n;
	str = ft_calcul(nb);
	if (!str)
		return (0);
	if (nb < 0)
		str[0] = '-';
	str[ft_strlen(str)] = '\0';
	return (str);
}

unsigned int	ft_unsigned_printnbr(unsigned int nb)
{
	unsigned int	len;
	char			*num;

	num = ft_uitoa(nb);
	len = ft_printstr(num);
	free (num);
	return (len);
}
