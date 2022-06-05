# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 17:16:31 by mthiesso          #+#    #+#              #
#    Updated: 2022/06/01 14:53:24 by mthiesso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
get_next_line.c get_next_line_utils.c ft_strichr.c

SRCSBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

OBJSBONUS = ${SRCSBONUS:.c=.o}

NAME	= libft.a

GCC		= gcc

GCCFLAGS = -Wall -Wextra -Werror

.c.o:
			${GCC} ${GCCFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

bonus:		${OBJS} ${OBJSBONUS}
			ar rc ${NAME} ${OBJS} ${OBJSBONUS}
			ranlib ${NAME}


all:		${NAME}

clean:
			rm -f ${OBJS} ${OBJSBONUS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
