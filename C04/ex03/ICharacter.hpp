#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter
{
    public:
        // Virtual destructor
            virtual ~ICharacter() {}
        // Function to get name of the Character
            virtual std::string const & getName() const = 0;
        // Function to equip something
            virtual void equip(AMateria* m) = 0;
        // Function to unequip something
            virtual void unequip(int idx) = 0;
        //  will have to use the Materia at the slot[idx], and pass the target parameter to the AMateria::use function.
            virtual void use(int idx, ICharacter& target) = 0;
};


#endif