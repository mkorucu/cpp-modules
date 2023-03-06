SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC =c++
FLAGS =  -Wall -Werror -Wextra -std=c++98
RM = rm -rf
NAME = ex01

#colors
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all: $(NAME)

$(NAME):	$(OBJ)
			@$(CC) $(FLAGS) $(SRC) -o $(NAME)
			@printf	"$(GREEN) - Executed$(RESET)\n"

clean:
			@$(RM) $(OBJ)
			@printf	"$(YELLOW) - Deleted Object Files $(RESET)\n"

fclean:		clean
			@$(RM) $(NAME)
			@printf	"$(YELLOW) - Deleted Program$(RESET)\n"

re:			fclean all

.PHONY:		all clean fclean re

run:		all
			./$(NAME)
