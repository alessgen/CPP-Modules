#include "RPN.hpp"

RPN::RPN() {}

RPN &RPN::operator=(const RPN &src) {
	this->RPN_stack = src.RPN_stack;
	return (*this);
}

RPN::RPN(const RPN &src) {
	this->RPN_stack = src.RPN_stack;
}

void RPN::performOp(std::string op) {
	int val1, val2, result;

	val1 = atoi(RPN_stack.top().c_str());
	RPN_stack.pop();
	val2 = atoi(RPN_stack.top().c_str());
	RPN_stack.pop();

	if (!op.compare("-")) {
		result = val2 - val1;
	}
	else if (!op.compare("+")) {
		result = val2 + val1;
	}
	else if (!op.compare("*")) {
		result = val2 * val1;
	}
	else if (!op.compare("/")) {
		result = val2 / val1;
	}
	std::stringstream temp;
	temp  << result;
	RPN_stack.push(temp.str());
}

void PrintStack(std::stack<std::string> s)
{
	if (s.empty())
		return;
	std::string x = s.top();
	s.pop();
	PrintStack(s);
	std::cout << x << " ";
	s.push(x);
}

RPN::RPN(char *input) {
	const char *delimiter = " ";
	char *str = strtok(input, delimiter);
		std::string temp = " +-*/";
	while (str != NULL) {
		if (str[0] >= 48 && str[0] <= 57) {
			RPN_stack.push(str);
		}
		else if (temp.find(str[0]) == std::string::npos)
			throw RPN::ErrorInput();
		else
			performOp(str);
		str = strtok(NULL, delimiter);
	}
	std::cout << HCYAN << "The result is: " << RESET << HGREEN << RPN_stack.top() << RESET << std::endl;
}