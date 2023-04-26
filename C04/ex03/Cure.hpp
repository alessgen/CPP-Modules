#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria {

    public:
        // Costructor
            Cure();
        // Destructor
            ~Cure();
        // Copy Costructor
            Cure(const Cure& src);
        // Copy assignment operator
            Cure& operator=(Cure const& src);
        // Will return a new instance of the same type (Cure Materia)
            AMateria* clone() const;
        // Override use of Materia function
            void use(ICharacter& target); 
};

#endif