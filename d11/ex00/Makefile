NAME = ft_create 

HEADER = ft_list.h

SOURCES = ft_create_elem.c main00.c 

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SOURCES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

test: clean all 
	./ft_create "abc" "cde"
