# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 16:32:14 by jlebre            #+#    #+#              #
#    Updated: 2022/06/03 18:33:56 by jlebre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
MLXFLAGS =  -lmlx -framework OpenGL -framework AppKit
RM = @rm -fr
NAME = so_long
SRCS = so_long.c check_map.c check_map_walls.c colors.c
OBJS = $(SRCS:.c=.o)

LIBFT = libft.a
LIBFT_PATH = libft
LIB = .


all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(OBJS) $(LIBFT) -I$(LIB) -I$(LIBFT_PATH) -Imlx $(MLXFLAGS) -o $(NAME)
	@echo "\033[0;32mSo_long Compiled!\033[0m"

$(LIBFT):
#make -f libft/Makefile -s
	@make -C $(LIBFT_PATH)
	
.c.o:
	@$(CC) $(FLAGS) -I$(LIB) -I$(LIBFT_PATH) -Imlx -c $< -o $@

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT_PATH)
	@echo "\033[0;31m.o Files Removed!\033[0m"
	
fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT_PATH)
	@echo "\033[0;31mSo_long Removed!\033[0m"

re: fclean all

.PHONY: all clean fclean re

#LIBFT_PATH	= ./Libft
#./Libft/libft.a: $(shell make -C $(LIBFT_PATH) -q libft.a || echo force)
#	make -C $(LIBFT_PATH)
