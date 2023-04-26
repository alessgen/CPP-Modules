#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {

    private:
        AMateria* materia[4];
		int index;

    public:
        // Costructor
            MateriaSource();
        // Destructor
            ~MateriaSource();
        // Copy costructor
            MateriaSource(MateriaSource const& src);
        // Copy overload assignment costructor
            MateriaSource& operator=(MateriaSource const& src);
        // Copies the Materia passed as a parameter and store it in memory so it can be cloned later.
            void learnMateria(AMateria*);
        // Returns a new Materia
            AMateria* createMateria(std::string const & type);
};

#endif