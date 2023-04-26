/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:14:37 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/06 13:14:37 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base* generate()
{
	std::cout << "generated: ";
	switch (rand() % 3)
	{
	case 0:
		std::cout << "A";
		return new A();
	case 1:
		std::cout << "B";
		return new B();
	case 2:
		std::cout << "C";
		return new C();
	default:
		return NULL;
	}
}

void identify(Base* p)
{
	std::cout << "By pointer: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "Cast error!" << std::endl;
}

void identify(Base& p)
{
	try
	{
		std::cout << "By reference: ";
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
		else
			std::cerr << "Class not valid!" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Not known" << std::endl;
	}
}

int main()
{
	srand(time(NULL));

	Base* ptr = generate();
	std::cout << " (Pointer)" << std::endl;
	Base* tmp = generate();
	Base& ref = *tmp;
	std::cout << " (Reference)" << std::endl;

	identify(ptr);
	identify(ref);

	delete ptr;
	delete tmp;
}