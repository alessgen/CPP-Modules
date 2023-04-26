#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{

	public:
	Dog(void); //Costructor
	Dog(std::string name); //Name Costructor
	~Dog(void);	//Destructor
	Dog &operator=(Dog const &src); //Copy Assignment Operator
	Dog(Dog const& src); //Copy Operator

	void makeSound(void) const;
};

#endif