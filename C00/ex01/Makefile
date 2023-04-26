# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 17:03:45 by agenoves          #+#    #+#              #
#    Updated: 2022/11/22 16:06:42 by agenoves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################# PROPERTY ##################

NAME = 			Phonebook
FLAGS = 		-Wall -Werror -Wextra -std=c++98 
COMPILE =		c++
RM =			rm -rf
SRC =			$(wildcard *cpp)
OBJ =			$(SRC:.cpp=.o)

################### RULES ###################

all:			$(NAME)

$(NAME):		$(OBJ)
				$(COMPILE) $(FLAGS) $(OBJ) -o $(NAME) -g

clean:
				$(RM) $(OBJ)

fclean: 		clean
				$(RM) $(NAME)

re: 			clean all
				
.PHONY: 		all clean fclean re