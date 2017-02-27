# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkalia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/26 12:13:30 by jkalia            #+#    #+#              #
#    Updated: 2017/01/26 14:01:25 by jkalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCE = ft_putchar.c ft_putstr.c ft_display_file.c 

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCE) -I ft_display.h 
	gcc -Wall -Wextra -Werror *.o -I ft_display.h -o $(NAME)

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
