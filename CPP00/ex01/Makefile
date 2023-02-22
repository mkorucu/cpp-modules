# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 03:25:05 by mkorucu           #+#    #+#              #
#    Updated: 2023/02/21 16:03:27 by mkorucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp	contact.cpp	phoneBook.cpp
OBJ	= $(SRC:.cpp=.o)
CC	= g++
RM	= rm -rf
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
NAME = phoneBook

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"
fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean $(NAME)

.PHONY: all clean fclean re
