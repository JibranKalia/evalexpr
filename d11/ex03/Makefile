NAME1 = ft_create 
NAME2 = ft_create

HEADER = ft_list.h

SOURCES1 = ft_create_elem.c ft_list_push_front.c ft_list_push_back.c main03.c ft_list_size.c
SOURCES2 = ft_create_elem.c ft_list_push_front.c ft_list_push_back.c main003.c ft_list_size.c

all: test1

test1:
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SOURCES1) -o $(NAME1)

test2:
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SOURCES2) -o $(NAME2)

clean:
	/bin/rm -f $(NAME1) $(NAME2)

re: clean all

test: clean all 
	./ft_create
	./ft_create "" "" "a" "aaaaa"
	./ft_create ""
	./ft_create "abc" "cde" "efg"
