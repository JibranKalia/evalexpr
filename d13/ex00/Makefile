NAME = ft_create 

HEADER = ft_btree.h

SOURCES = btree_create_node.c main.c

all: test

test:
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SOURCES) -o $(NAME)

clean:
	/bin/rm -f $(NAME) 

re: clean all

test: clean all 
	./ft_create
	./ft_create "" "" "a" "aaaaa"
	./ft_create ""
	./ft_create "abc" "cde" "efg"
