# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/28 16:52:07 by jkalia            #+#    #+#              #
#    Updated: 2017/01/29 19:13:36 by jkalia           ###   ########.fr        #
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

test: fclean all
	./eval_expr "5 + 9" || echo 'Answer: 14'
	./eval_expr "(5 + ((3 * 4) - 2))" || echo 'Answer: 15'


re: fclean test 
