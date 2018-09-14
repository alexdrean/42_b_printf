# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrean <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 12:16:33 by adrean            #+#    #+#              #
#    Updated: 2018/09/13 22:34:58 by adrean           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -c -Werror -Wextra -Wall
SRC = b_printf.c -I libft.a
OUT = b_printf.o

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OUT)

all: $(NAME)

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
