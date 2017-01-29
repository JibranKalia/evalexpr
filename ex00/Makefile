# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/28 16:52:07 by jkalia            #+#    #+#              #
#    Updated: 2017/01/29 14:04:22 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

HEADERS = includes/

SOURCES = src/*.c

all : $(NAME)

$(NAME):
	gcc -Wall -Werror -Wall -c -I/$(HEADERS) $(SOURCES) 
	gcc -Wall -Werror -Wall -I/$(HEADERS) *.o -o $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

test: all
	./eval_expr "5 * (23 + 111 * 4) / 2"



re: fclean test 
