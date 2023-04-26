#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	//Protected attributes
	protected:
		std::string type;

	// Public attributes;
	public:
		WrongAnimal(void); // Default Costructor 
		virtual ~WrongAnimal(void); // virtual Destructor
		WrongAnimal(std::string name); // Name Costructor
		WrongAnimal(WrongAnimal const& src); // Copy costructor 
        WrongAnimal &operator=(WrongAnimal const &src); // Copy assignment costructor
        //Member function
            std::string getType(void) const;
            virtual void makeSound() const;
};

#endif