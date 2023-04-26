# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 12:35:12 by agenoves          #+#    #+#              #
#    Updated: 2022/12/01 15:56:03 by agenoves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################# PROPERTY ##################

NAME = 			"Aaaaand... OPEN!"
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