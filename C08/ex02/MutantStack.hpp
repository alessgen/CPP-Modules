#ifndef MUTANT_HPP
#define MUTANT_HPP

#include <iostream>
#include <stack>

template <class T> class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<T> stack_name;
		typedef typename stack_name::container_type container;
		typedef typename container::iterator iterator;
		typedef typename container::reverse_iterator rev_iterator;

		// Constructors
		MutantStack() : stack_name()
		{
			std::cout << "Default Costructor called" << std::endl;
		}

		MutantStack(const stack_name &src) : stack_name(src)
		{
			std::cout << "Copy Costructor called" << std::endl;
		}

		// Destructor
		~MutantStack()
		{
			std::cout << "Destructor called" << std::endl;
		}

		// Overloaded operator
		stack_name &operator=(const stack_name &src)
		{
			if (*this != src)
				*this = src;
			return (*this);
		}

		// begin iterator
		iterator begin()
		{
			return (stack_name::c.begin());
		}

		// end iterator
		iterator end()
		{
			return (stack_name::c.end());
		}

		// Reverse iterator begin()
		rev_iterator rbegin()
		{
			return (stack_name::c.rbegin());
		}

		// Reverse iterator end()
		rev_iterator rend()
		{
			return (stack_name::c.rend());
		}
};

#endif