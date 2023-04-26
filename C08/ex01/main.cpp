#include "span.hpp"

// Main fatto da me, puoi testare anche con piú numeri!
int main()
{
	Span sp = Span(5);
	sp.addNumber(18);
	sp.addNumber(3);
	sp.addNumber(9);
	sp.addNumber(15);
	sp.addNumber(7);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
