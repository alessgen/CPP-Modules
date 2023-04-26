# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 12:07:48 by agenoves          #+#    #+#              #
#    Updated: 2023/01/16 15:43:33 by agenoves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################# PROPERTY ##################

NAME = 			"Form up, maggots!"
FLAGS = 		-Wall -Werror -Wextra -std=c++98
COMPILE =		c++
FILE =			$(wildcard *.cpp)
RM =			rm -rf

################### RULES ###################

all:
				$(COMPILE) $(FLAGS) $(FILE) -o $(NAME)

clean:
				$(RM) $(NAME)

fclean: 		clean

re:				clean all
				
.PHONY: 		all clean fclean re