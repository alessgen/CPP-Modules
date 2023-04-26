#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5); // Add an element on the containers type.
	mstack.push(17);
	std::cout << "Top element of the stack: " << mstack.top() << std::endl; // il metodo .top é una reference all'elemento top della stack ossia quello appena aggiunto.
	mstack.pop(); // Il metodo .pop rimuove l'elemento top della stack (l'elemento che stampiamo con .top)
	std::cout << "Size of the stack: " << mstack.size() << std::endl; // Ritorna il numero di elementi nella stack
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(15);
	mstack.push(22);
	mstack.push(0);
	// Define classic iterator from top to bottom
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	// Print of the stack with iterators
	std::cout << "Printing the MutantStack with iterator:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	// Define reverse iterator from bottom to top
	MutantStack<int>::rev_iterator r_it = mstack.rbegin();
	MutantStack<int>::rev_iterator r_ite = mstack.rend();
	std::cout << "Printing the MutantStack with reverse iterator:" << std::endl;
	while (r_it != r_ite)
	{
		std::cout << *r_it << std::endl;
		++r_it;
	}
	std::stack<int> s(mstack);
	return 0;
}

// If you run it a first time with your MutantStack, and a second time replacing the
// MutantStack with, for example, a std::list, the two outputs should be the same

// int main() {
	// std::list<int> mstack;
	// mstack.push_back(5);
	// mstack.push_back(17);
	// std::cout << mstack.back() << std::endl; // il metodo .top é una reference all'elemento top della stack ossia quello appena aggiunto.
	// mstack.pop_back(); // Il metodo .pop rimuove l'elemento top della stack (l'elemento che stampiamo con .top)
	// std::cout << mstack.size() << std::endl; // Ritorna il numero di elementi nella stack
	// mstack.push_back(3);
	// mstack.push_back(5);
	// mstack.push_back(737);
	// //[..]
	// mstack.push_back(0);
	// std::list<int>::iterator it = mstack.begin();
	// std::list<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::list<int> s(mstack);
	// return 0;
// }