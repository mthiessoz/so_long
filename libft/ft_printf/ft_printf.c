/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:52:02 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/29 18:07:24 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_spec(char spec, int count, va_list ap)
{
	if (spec == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (spec == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		count += ft_printnbr(va_arg(ap, int));
	else if (spec == 'u')
		count += ft_unsigned_printnbr(va_arg(ap, unsigned int));
	else if (spec == 'x')
		count += ft_hexa_printnbr(va_arg(ap, unsigned int), 0);
	else if (spec == 'X')
		count += ft_hexa_printnbr(va_arg(ap, unsigned int), 1);
	else if (spec == 'p')
	{
		count += ft_printstr("0x");
		count += ft_hexa_printnbr(va_arg(ap, unsigned long int), 0);
	}
	else if (spec == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count = ft_spec(format[i], count, ap);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
