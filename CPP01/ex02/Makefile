SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = brain

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean run

run: all
	./$(NAME)
.PHONY: re all clean fclean