# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrean <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 12:16:33 by adrean            #+#    #+#              #
#    Updated: 2018/09/19 20:26:00 by adrean           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -c -Werror -Wextra -Wall
SRC = b_printf.c ft_putchar.c ft_putstr.c ft_putnbr_base.c ft_putdigit.c
OUT = $(SRC:.c=.o)

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar -rcs $(NAME) $(OUT)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
