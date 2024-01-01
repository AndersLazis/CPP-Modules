# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 17:19:10 by aputiev           #+#    #+#              #
#    Updated: 2023/10/16 19:01:28 by aputiev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Sed_is_for_losers

CC			= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		
re:		fclean all

.PHONY: all fclean clean re
		