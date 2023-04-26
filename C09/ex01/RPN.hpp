#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stack>
#include <cstring>
#include <stdlib.h>

#define HBLACK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGREEN "\e[0;92m"
#define HYELLOW "\e[0;93m"
#define HBLUE "\e[0;94m"
#define HMAGENTA "\e[0;95m"
#define HCYAN "\e[0;96m"
#define HWHITE "\e[0;97m"
#define RESET "\e[0m"

class RPN {
	public:
	// Costructor and Destructor
		RPN();
		~RPN() {};
		RPN(char *input);
		RPN(const RPN &src);
		RPN&operator=(const RPN &src);
	// Member function
		void									performOp(std::string op);
	private:
		std::stack<std::string>					RPN_stack;
	
	class ErrorInput : public std::exception {
		public:
			const char *what() const throw() {
				return ("Invalid Operator!");
			}
	};
};

#endif