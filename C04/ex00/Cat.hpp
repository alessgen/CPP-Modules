#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {

    public:
        Cat(void); //Costructor 
        Cat(std::string name); //Name Costructor
        ~Cat(void); // Decostructor
        Cat &operator=(Cat const &src); // Copy Assignment operator
        Cat(Cat const& src); //Copy Operator

        void makeSound(void) const;
};

#endif