/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:12:58 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/29 15:05:32 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	int		len;
	char	*num;

	num = ft_itoa(nb);
	len = ft_printstr(num);
	free (num);
	return (len);
}
