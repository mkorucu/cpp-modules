NAME = ex00
SRC = main.cpp Cat.cpp Animal.cpp Dog.cpp
OBJ = $(OBJ:.pp=.o)
CC = c++ -std=+98
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

all: $(NAME)

$(NAME): $(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

run:	all
		./$(NAME)

.PHONY: clean fclean all re run