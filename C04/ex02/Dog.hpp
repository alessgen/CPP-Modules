#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{

	private:
        Brain* attribute;
	public:
		Dog(void); //Costructor
		Dog(std::string name); //Name Costructor
		~Dog(void);	//Destructor
		Dog &operator=(Dog const &src); //Copy Assignment Operator
		Dog(const Dog& src); //Copy Operator
		Brain* getBrain(void) const;
		// Override pure virtual function of Animal Abstract class
        	void makeSound(void) const;
};

#endif