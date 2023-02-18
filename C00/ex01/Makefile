# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 03:25:05 by mkorucu           #+#    #+#              #
#    Updated: 2023/02/18 22:58:44 by mkorucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp	contact.cpp	phoneBook.cpp
OBJ	= $(SRC:.cpp=.o)
CC	= g++
RM	= rm -rf
FLAGS	=	-WAll -Werror -Wextra -std=c++98
NAME = phoneBook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
