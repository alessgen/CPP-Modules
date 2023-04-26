#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {

    // Private attributes
    private:
        std::string name;
        AMateria* inventory[4];
    // Public member function
    public:
        // Costructor names as parameter
            Character(std::string name);
        // Destructor 
            ~Character();
        // Copy costructor
            Character(Character const& src);
        // Copy overload assingment operator
            Character& operator=(Character const& src);
        // Function to get name of the Character
            std::string const & getName() const;
        // Function to equip something
            void equip(AMateria* m);
        // Function to unequip something
            void unequip(int idx);
        //  will have to use the Materia at the slot[idx], and pass the target parameter to the AMateria::use function.
            void use(int idx, ICharacter& target);
};

#endif