#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
    // Protected attributes
    protected:
        std::string type;
        // Public member function
        public:
            // Costructor with const type parameter
                AMateria(std::string const & type);
            // Default Costructor
                AMateria();
            // Destructor
                virtual ~AMateria(); 
            // Copy costructor
                AMateria(AMateria const& src);
            // Copy assignemt overload costructor
                AMateria& operator=(AMateria const& src);
            // Returns the materia type
                std::string const & getType() const;
            // Pure Virtual function that makes the class Abstract
                virtual AMateria* clone() const = 0;
            // Member function to attack a target
                virtual void use(ICharacter& target);
};

#endif