#include "PmergeMe.hpp"
#include <wait.h>
int main(int ac, char**av)
{
	if (ac < 2)
	{
		std::cout << "The arguments must be between 2 and 3000" << std::endl;
		return 0;
	}
	try
	{
		PmergeMe f(av[1]);
		f.vec_execute();
		f.deque_execute();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
