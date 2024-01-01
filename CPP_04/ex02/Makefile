# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 10:45:51 by aputiev           #+#    #+#              #
#    Updated: 2023/10/31 16:52:40 by aputiev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Abstract_class

CC			= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ			= $(SRC:.cpp=.o)
OBJ_PATH	= ./objects/
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))


all: $(OBJ_PATH) $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $@

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ_PATH)

fclean: clean
		rm -f $(NAME)
		
re:		fclean all

.PHONY: all fclean clean re
