NAME = btc

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	BitcoinExchange.cpp \
		main.cpp 

CC = c++

OBJ = ${SRC:%.cpp=%.o}

%.o: %.cpp
	@$(CC) -c $< -o $@ -g $(FLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $^ -o $@
	@echo "\033[32mCOMPILATION SUCCESS 👌\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "\033[36mCLEAN 🗑️\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[36mFCLEAN 🗑️\033[0m"

re: fclean all

.PHONY: all clean fclean re