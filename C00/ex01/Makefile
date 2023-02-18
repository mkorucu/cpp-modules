# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 03:25:05 by mkorucu           #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/02/18 22:32:31 by mkorucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Phonebook.cpp Contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

=======
#    Updated: 2023/02/18 03:30:39 by mkorucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp	contact.cpp	phoneBook.cpp
OBJ	= $(SRC:.cpp=.o)
CC	= g++
RM	= rm -rf
FLAGS	=	-WAll -Werror -Wextra -std=c++98
>>>>>>> parent of 907e653 (ex00 makefile fixed)
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
