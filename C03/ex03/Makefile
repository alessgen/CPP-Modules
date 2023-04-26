# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: md-aless <md-aless@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 12:35:12 by agenoves          #+#    #+#              #
#    Updated: 2023/01/31 12:17:17 by md-aless         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################# PROPERTY ##################

NAME = 			Now_It_s_Weird
FLAGS = 		-Wall -Werror -Wextra -std=c++98
COMPILE =		c++
FILE =			$(wildcard *.cpp)
RM =			rm -rf

################### RULES ###################

all:
				$(COMPILE) $(FLAGS) $(FILE) -o $(NAME) -g

clean:
				$(RM) $(NAME)

fclean: 		clean

re:				clean all
				
.PHONY: 		all clean fclean re