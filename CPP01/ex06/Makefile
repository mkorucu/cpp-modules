SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Harl

#colors
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
BLU			=	\e[0;34m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) $(SRC) -o $(NAME)
		@printf "$(GREEN)- executed $(RESET)\n"

clean:
		@$(RM) $(OBJ)
		@printf	"$(YELLOW)- Deleted objects $(RESET)\n"

fclean:	clean
		@$(RM) $(NAME)
		@printf	"$(YELLOW)- Deleted Program $(RESET)\n"

re:		fclean all

debug:	all
		@./$(NAME) DEBUG

info:	all
		@./$(NAME) INFO

warning: all
		@./$(NAME) WARNING

error:	all
		@./$(NAME) ERROR
.PHONY: all clean fclean re