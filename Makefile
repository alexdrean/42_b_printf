# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrean <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 12:16:33 by adrean            #+#    #+#              #
#    Updated: 2018/09/14 00:05:06 by adrean           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -c -Werror -Wextra -Wall
LIBS = libft.a
SRC = b_printf.c -I $(LIBS)

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar -x $(LIBS)
	ar -rcs $(NAME) *.o

all: $(NAME)

clean:
	rm -f *.o "__.SYMDEF SORTED"

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
