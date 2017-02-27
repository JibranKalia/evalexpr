# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/24 20:11:48 by jkalia            #+#    #+#              #
#    Updated: 2017/01/24 21:52:15 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

HEADERS = libft.h 

SOURCES = ft_putchar.c ft_putstr.c ft_atoi.c ft_putnbr.c ft_strcmp.c main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS) $(SOURCES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

test: re
	./do-op
	./do-op 1 + 1
	./do-op 42amis - -20toto12
	./do-op 1 p 1
	./do-op 1 + toto3
	./do-op toto3 + 4
	./do-op foo plus bar
	./do-op 25 / 0
	./do-op 25 % 0
	./do-op 25 / f
	./do-op 25 ++ "+1"
	./do-op 25 + "+1"
