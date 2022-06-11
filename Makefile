# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 15:31:22 by mthiesso          #+#    #+#              #
#    Updated: 2022/06/11 14:43:37 by mthiesso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- Sources -----------------
SOLONG				=        main.c parsing_map.c map_errors.c file_errors.c check_errors.c check_walls.c \
								map_loading.c map_init.c start_game.c exit.c
LIB					=        ./libft/libft.a
MLXLIB				=        ./mlx/libmlx.a
LIBFT_MLX			=        $(MAKE) -C libft && $(MAKE) -C mlx
MINILBX				=        -Lmlx -lmlx -framework OpenGL -framework AppKit

# ---------------- OBJS & Sources -----------
SRC_SOLONG			=        $(SOLONG)
OBJS_SOLONG			=        $(SRC_SOLONG:.c=.o)

# ---------------- Name && GCC --------------
NAME				=        so_long
GCC					=        gcc
FLAGS				=        -Wall -Wextra -Werror -Imlx

# ---------------- Couleurs -----------------
GREEN				=        \033[1;32m
RED					=        \033[1;31m
ENDCOLOR			=        \033[0m

# --------------- Texts ---------------------
START				=        echo "\n $(GREEN)Compilation en cours$(ENDCOLOR)\n"
COMPOK				=        echo "\n $(GREEN)Compilation OK$(ENDCOLOR)\n"
LIBX				=        echo "\n $(GREEN)MinilibX OK$(ENDCOLOR)\n"
GNL_COMP			=        echo "\n $(GREEN)GNL OK$(ENDCOLOR)\n"
CLEAN_				=        echo "\n $(RED)Suppression des OBJS$(ENDCOLOR)\n"
FCLEAN_				=        echo "\n $(RED)Suppression des executables$(ENDCOLOR)\n"

# --------------- Regles --------------------
all: $(NAME)

$(NAME): start so_long

start: 
		@$(START)
		@$(LIBFT_MLX)

so_long: $(OBJS_SOLONG)
		@$(GCC) $(FLAGS) -o $(NAME) $(OBJS_SOLONG) $(LIB) $(MINILBX)
		@$(LIBX)
		@$(COMPOK)

clean:
		rm -rf $(OBJS_SOLONG)
		cd libft && make clean
		cd mlx && make clean
		@$(CLEAN_)

fclean: clean
		rm -rf $(NAME)
		cd libft && make fclean
		cd mlx && make clean
		@$(FCLEAN_)
        
re: fclean all

.PHONY: all so_long clean fclean re libft