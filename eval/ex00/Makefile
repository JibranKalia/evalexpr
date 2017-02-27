# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/28 16:52:07 by jkalia            #+#    #+#              #
#    Updated: 2017/01/29 21:43:20 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

HEADERS = includes/

SOURCES = src/*.c

all : $(NAME)

$(NAME):
	gcc -Wall -Werror -Wall -I/$(HEADERS) -c $(SOURCES) 
	gcc -Wall -Werror -Wall -I/$(HEADERS) *.o -o $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean test 
