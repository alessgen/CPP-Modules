#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria {

    public:
        // Costructor
            Ice();
        // Destructor
            ~Ice();
        // Copy Costructor
            Ice(Ice const& src);
        // Copy assignment operator
            Ice& operator=(Ice const& src);
        // Will return a new instance of the same type (Ice Materia)
            AMateria* clone() const;
        // Override use of Materia function
            void use(ICharacter& target); 

};

#endif