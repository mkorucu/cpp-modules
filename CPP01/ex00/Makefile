SRC	=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 
OBJ	=	$(SRC:.cpp=.o)
CPP = c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98
RM	=	rm -rf
NAME	=	Zombie

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all:	$(NAME)

$(NAME): $(OBJ)
		@$(CPP) $(SRC) $(FLAGS) -o $(NAME)
		@printf "$(GREEN)- Executable ready.\n$(RESET)"

clean:	
		$(RM) $(OBJ)
		@printf	"$(YELLOW)- Object files removed.$(RESET)\n"

fclean : clean
		@$(RM) $(NAME)
		@printf "$(YELLOW)- Executable removed.$(RESET)\n"

run: all 
	./$(NAME)

re: fclean run

.PHONY: all clean fclean re