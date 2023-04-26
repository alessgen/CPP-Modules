#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

    public:
        WrongCat(void); //Costructor 
        WrongCat(std::string name); //Name Costructor
        ~WrongCat(void); // Decostructor
        WrongCat &operator=(WrongCat const &src); // Copy Assignment operator
        WrongCat(WrongCat const& src); //Copy Operator

        void makeSound(void) const;
};

#endif
