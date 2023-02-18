# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 15:22:12 by mkorucu           #+#    #+#              #
#    Updated: 2023/02/18 22:13:14 by mkorucu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)
CC		=	g++
RM		=	rm -f
FLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)
		@printf "ALL CLEANED\n"

fclean:	
		$(RM) $(OBJS) 
		$(RM) $(NAME)
		@printf "ALL CLEANED\n"

re:	fclean all
.PHONY: all clean fclean re bonus