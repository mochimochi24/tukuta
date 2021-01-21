# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yayito <yayito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/21 13:49:00 by yayito            #+#    #+#              #
#    Updated: 2021/01/21 15:40:18 by yayito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILE = ft_*.c
OBJ = $(FILE:.c=.o)

all: $(NAME)

$(NAME): $(FILE)
	ar rc $(NAME) $(OBJ)

.PHONY: clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
