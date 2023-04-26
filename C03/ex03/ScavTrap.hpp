#ifndef SERENA_HPP
# define SERENA_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap(void); // Default Costructor
		~ScavTrap(void); // Destructor
		ScavTrap(ScavTrap const& scavvino); // Copy Costructor
		ScavTrap &operator=(ScavTrap const& scavvino); // Copy Assignment Operator
		ScavTrap(std::string name); // Costructor with std::string as parameter
		// Member Function
			void attack(const std::string &target);
			void guardGate();
};

#endif