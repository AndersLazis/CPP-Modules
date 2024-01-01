# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 15:18:51 by aputiev           #+#    #+#              #
#    Updated: 2023/09/17 15:25:11 by aputiev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Phonebook

CC			= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_PATH	= ./sources/
SRC			= main.cpp Contact.class.cpp PhoneBook.class.cpp 
SRCS		= $(addprefix $(SRC_PATH), $(SRC))
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

$(OBJ_PATH)%.o:	$(SRC_PATH)%.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@ $(INC)

clean:	
		rm -rf $(OBJ_PATH)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all fclean clean re
