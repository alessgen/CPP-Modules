#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
class FragTrap: public ClapTrap {
	public:
		FragTrap(void); // Default Costructor
		~FragTrap(void); // Decostructor
		FragTrap(std::string name); // Costructor with string as parameter
		FragTrap(FragTrap const& fragghino); // Copy Costructor
		FragTrap &operator=(FragTrap const& fragghino); // Copy Assignment Operator
		// Member Function
			void highFivesGuys(void); // High Fives member function
};