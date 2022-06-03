# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 11:24:43 by jlebre            #+#    #+#              #
#    Updated: 2022/06/03 16:26:30 by jlebre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM		= @rm -fr

NAME	= libft.a
LIB		= .

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\
			get_next_line.c get_next_line_utils.c\
			ft_printf.c func_extra.c func_extra1.c\

OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(LIB1) $(NAME) $(OBJS)
			@$(LIB2) $(NAME)
			@echo "\033[0;32mLibft Compiled!\033[0m"

.c.o:
			@$(CC) $(CFLAGS) -I$(LIB) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)
			@echo "\033[0;31m.o Files Removed!\033[0m"

fclean:		clean
			$(RM) $(NAME)
			@echo "\033[0;31mLibft.a Removed!\033[0m"

re:			fclean all

.PHONY:		all clean fclean re 
