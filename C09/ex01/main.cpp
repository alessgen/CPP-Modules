#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc < 2)
	{
		std::cout << HRED << "Need one ARGGG!" << RESET << std::endl;
		return (1);
	}
	try
	{
		RPN object(argv[1]);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}