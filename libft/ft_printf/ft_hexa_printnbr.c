/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_printnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:12:58 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/29 18:00:08 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	unsigned long int	ft_count(unsigned long int n)
{
	unsigned long int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n > 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_hexa_printnbr(unsigned long int nb, int up)
{
	char	*hexa;

	if (up == 0)
		hexa = "0123456789abcdef";
	else if (up == 1)
		hexa = "0123456789ABCDEF";
	if (nb >= 0 && nb <= 15)
		ft_putchar(hexa[nb]);
	else
	{
		ft_hexa_printnbr(nb / 16, up);
		ft_hexa_printnbr(nb % 16, up);
	}
	return (ft_count(nb));
}
