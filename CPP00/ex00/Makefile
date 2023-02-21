# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 15:22:12 by mkorucu           #+#    #+#              #
#    Updated: 2023/02/21 15:33:38 by mkorucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)
CC		=	g++
RM		=	rm -f
FLAGS	=	-Wall -Werror -Wextra -std=c++98

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m


all: $(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
			@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

clean:
		@$(RM) $(OBJS)
		@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean:	clean
		@$(RM) $(NAME)
		@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re:	fclean all
.PHONY: all clean fclean re bonus