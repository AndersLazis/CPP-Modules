# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 10:45:51 by aputiev           #+#    #+#              #
#    Updated: 2023/10/26 20:03:40 by aputiev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= repetitive_work

CC			= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ_PATH	=./objects/
OBJ			= $(SRC:.cpp=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

INC_PATH	=./includes/
INC			= -I $(INC_PATH)

all: $(OBJ_PATH) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $@ $(INC)
	
$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@ $(INC)

clean:
		rm -rf $(OBJ_PATH)

fclean: clean
		rm -f $(NAME)
		
re:		fclean all

.PHONY: all fclean clean re
