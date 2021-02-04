# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/21 13:49:00 by yayito            #+#    #+#              #
#    Updated: 2021/02/04 18:43:28 by yayito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILE = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	   ft_strlen.c ft_memchr.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c \
	   ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c \
	   ft_atoi.c ft_isalnum.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_itoa.c ft_strmapi.c \
	   ft_strtrim.c
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
