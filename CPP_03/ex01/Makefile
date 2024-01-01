# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 10:45:51 by aputiev           #+#    #+#              #
#    Updated: 2023/10/25 14:15:22 by aputiev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Serena

CC			= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp
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
