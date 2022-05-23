# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:42:04 by mthiesso          #+#    #+#              #
#    Updated: 2021/11/29 15:32:34 by mthiesso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_putchar.c ft_printstr.c ft_printnbr.c ft_unsigned_printnbr.c ft_hexa_printnbr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

GCC 	= gcc

CFLAGS = -Wall -Werror -Wextra

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${MAKE} -C ./libft/
			cp ./libft/libft.a ${NAME}
			ar rc ${NAME} ${OBJS}
			
all:		${NAME}

clean:
			rm -f ${OBJS}
			${MAKE} clean -C ./libft/

fclean:		clean
			rm -f ${NAME}
			${MAKE} fclean -C ./libft/

re:			fclean all	
