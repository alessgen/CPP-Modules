################# PROPERTY ##################

NAME = 			sed_is_for_losers
FLAGS = 		-Wall -Werror -Wextra -std=c++98
COMPILE =		c++
FILE =			$(wildcard *.cpp)
RM =			rm -rf
FILES =			*.txt *.replace

################### RULES ###################

all:
				$(COMPILE) $(FLAGS) $(FILE) -o $(NAME)

clean:
				$(RM) $(NAME)

fclean: 		clean
				$(RM) $(FILES)
re:				clean all

.PHONY: 		all clean fclean re