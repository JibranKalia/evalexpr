# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/28 16:52:07 by jkalia            #+#    #+#              #
#    Updated: 2017/01/28 21:17:36 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

HEADERS = includes/

SOURCES = src/*.c

all = $(NAME)

$(NAME):
	gcc -Wall -Werror -Wall -c -I/$(HEADERS) $(SOURCES) 
	gcc -Wall -Werror -Wall -I/$(HEADERS) *.o -o $(NAME)

clean:
	/bin/rm -r *.o

fclean: clean
	/bin/rm -r $(NAME)

re: clean all
