SRC = main.cpp src/HumanA.cpp src/HumanB.cpp src/Weapon.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = violence

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re: clean all

run:	all
		./$(NAME)

.PHONY: all clean fclean re run