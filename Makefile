# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/21 13:49:00 by yayito            #+#    #+#              #
#    Updated: 2021/01/22 21:13:56 by yayito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILE = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	   ft_strlen.c
OBJ = $(FILE:.c=.o)

.PHONY: all

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

.PHONY: clean

clean:
	rm -f $(OBJ)

.PHONY: fclean

fclean: clean
	rm -f $(NAME)

.PHONY: re

re: fclean all
