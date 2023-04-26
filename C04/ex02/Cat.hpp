#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

    private:
        Brain* attribute;
    public:
        Cat(void); //Costructor 
        Cat(std::string name); //Name Costructor
        ~Cat(void); // Decostructor
        Cat &operator=(Cat const &src); // Copy Assignment operator
        Cat(Cat const& src); //Copy Operator
		Brain* getBrain(void) const;
        // Override pure virtual function of Animal Abstract class
            void makeSound(void) const;
};

#endif