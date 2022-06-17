# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admin <admin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 16:32:14 by jlebre            #+#    #+#              #
#    Updated: 2022/06/17 23:05:04 by admin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
MLXFLAGS_MAC =  -lmlx -framework OpenGL -framework AppKit
MLXFLAGS_LINUX = -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
RM = @rm -fr
NAME = so_long
SRCS = so_long.c colors.c read_map.c\
	print_map.c check_map.c key.c utils.c print_map_utils.c
OBJS = $(SRCS:.c=.o)

HEADER = so_long.h libft/libft.h

LIBFT = libft/libft.a
LIBFT_PATH = libft
LIB = .

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(HEADER)
	@$(CC) $(OBJS) $(LIBFT) -I$(LIB) -I$(LIBFT_PATH) -Imlx $(MLXFLAGS_MAC) -o $(NAME)
#@$(CC) $(OBJS) $(LIBFT) -I$(LIB) -I$(LIBFT_PATH) $(MLXFLAGS_LINUX) -o $(NAME)
	@echo "\033[0;32mSo_long Compiled!\033[0m"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH)
	 
.c.o:
	@$(CC) $(FLAGS) -I$(LIB) -I$(LIBFT_PATH) -Imlx -c $< -o $@
#@$(CC) $(FLAGS) -I$(LIB) -I$(LIBFT_PATH) -I/usr/include -Imlx_linux -O3 -c $< -o $@

clean:
	$(RM) $(OBJS)
	@$(MAKE) clean -C $(LIBFT_PATH)
	@echo "\033[0;31m.o Files Removed!\033[0m"
	
fclean: clean
	$(RM) $(NAME) 
	@$(MAKE) fclean -C $(LIBFT_PATH)
	@echo "\033[0;31mSo_long Removed!\033[0m"

re: fclean all

.PHONY: all clean fclean re

#LIBFT_PATH	= ./Libft
#./Libft/libft.a: $(shell make -C $(LIBFT_PATH) -q libft.a || echo force)
#	make -C $(LIBFT_PATH)
