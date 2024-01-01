# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 14:24:14 by aputiev           #+#    #+#              #
#    Updated: 2023/09/12 14:24:55 by aputiev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRC			= megaphone.cpp
OBJS		= $(SRC:.cpp=.o)
CC			= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:	
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean $(NAME)

.PHONY:	all fclean clean re
