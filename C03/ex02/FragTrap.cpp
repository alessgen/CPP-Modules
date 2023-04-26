#include "FragTrap.hpp"

FragTrap:: FragTrap(): ClapTrap(){
	std::cout << "FragTrap Constructor Called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FragTrap:: FragTrap(std::string name): ClapTrap(name){
	std::cout << "FragTrap Constructor Called of the name " << name << std::endl;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FragTrap:: ~FragTrap(void){
	std::cout << "FragTrap Destructor Called" << std::endl;
}

void FragTrap:: highFivesGuys(void){
	std::cout << "FragTrap GIVE ME HIGH FIVE BABIESSSSS!!!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}
