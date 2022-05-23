/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:52:22 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/29 17:59:36 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int				ft_putchar(char c);
int				ft_printstr(char *str);
int				ft_printf(const char *format, ...);
int				ft_printnbr(int nb);
int				ft_hexa_printnbr(unsigned long int nb, int up);

unsigned int	ft_unsigned_printnbr(unsigned int nb);

#endif