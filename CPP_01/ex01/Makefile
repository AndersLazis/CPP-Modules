# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 19:30:58 by aputiev           #+#    #+#              #
#    Updated: 2023/09/23 14:55:53 by aputiev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= moar_brainz!

CC			= c++
CPP_FLAGS	=   -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp Zombie.cpp zombieHorde.cpp
OBJ_PATH	= ./objects/
OBJ			= $(SRC:.cpp=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

all: $(OBJ_PATH) $(NAME)
		
$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $@ 

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o:	%.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@ 

clean:	
		rm -rf $(OBJ_PATH)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all fclean clean re
