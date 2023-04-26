
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	// Protected Attributes
	protected:
		std::string name;
		unsigned int hit_point;
		unsigned int energy_point;
		unsigned int attack_damage;

// Public attributes
	public:
		ClapTrap(void); // Default Constructor
		~ClapTrap(void); // Deconstructor
		ClapTrap(std::string name); // STD::string constructor
		ClapTrap(ClapTrap const &f); // Copy Costructor
		ClapTrap& operator=(ClapTrap const &f); // Copy assignment constructor
		//Public Member Function
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};

#endif