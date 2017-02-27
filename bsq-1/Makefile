# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/01 15:46:50 by jkalia            #+#    #+#              #
#    Updated: 2017/02/01 19:47:47 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #P

NAME = bsq

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c *.c 
	gcc -Wall -Wextra -Werror -o $(NAME) *.o

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
