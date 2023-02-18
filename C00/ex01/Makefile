# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 03:25:05 by mkorucu           #+#    #+#              #
#    Updated: 2023/02/18 03:30:39 by mkorucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp	contact.cpp	phoneBook.cpp
OBJ	= $(SRC:.cpp=.o)
CC	= g++
RM	= rm -rf
FLAGS	=	-WAll -Werror -Wextra -std=c++98
NAME = phoneBook

all : $(NAME)

$(NAME): 	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean	$(NAME)

.PHONY: all clean fclean re