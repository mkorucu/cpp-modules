SRC = main.cpp Degis.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = sed

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re run