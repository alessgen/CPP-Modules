# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 13:15:13 by agenoves          #+#    #+#              #
#    Updated: 2023/02/06 13:15:13 by agenoves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################# PROPERTY ##################

NAME = 			"Conversion of scalar types"
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