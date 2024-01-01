# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 19:30:58 by aputiev           #+#    #+#              #
#    Updated: 2023/09/25 16:23:48 by aputiev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= unnecessary_violence

CC			= c++
CPP_FLAGS	=   -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ_PATH	= ./objects/
OBJ			= $(SRC:.cpp=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))
INC_PATH	= ./includes/
INC			= -I $(INC_PATH)

all: $(OBJ_PATH) $(NAME)
		
$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $@ $(INC)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o:	%.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@ $(INC)

clean:	
		rm -rf $(OBJ_PATH)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all fclean clean re
