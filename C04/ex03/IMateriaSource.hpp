#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
    public:
        // Destructor
        virtual ~IMateriaSource() {}
        // Copies the Materia passed as a parameter and store it in memory so it can be cloned later.
        virtual void learnMateria(AMateria*) = 0;
        // Returns a new Materia
        virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif