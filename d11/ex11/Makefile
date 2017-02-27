NAME1 = ft_create 


HEADER = ft_list.h

SOURCES1 = ft_create_elem.c main.c ft_list_push_params.c ft_list_foreach.c
SOURCES2 = ft_create_elem.c main.c ft_list_push_params.c

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
	./ft_create 
	./ft_create asdf 
	./ft_create asdf qwer
	./ft_create asdf qwer zxcv	
	./ft_create '' 
	./ft_create 15 '' 25
	./ft_create wat
