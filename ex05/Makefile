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

re:		clean all

debug:	all
		@printf	"$(BLU)- [ Debugging ] $(RESET)\n"
		@./$(NAME) debug

info:	all
		@printf	"$(BLU)- [ giving info ] $(RESET)\n"
		@./$(NAME) info

warning: all
		@printf	"$(BLU)- [ warning ] $(RESET)\n"
		@./$(NAME) warning

error:	all
		@printf	"$(BLU)- [ error ]$(RESET)\n"
		@./$(NAME) error
.PHONY: all clean fclean re