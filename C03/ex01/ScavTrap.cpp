#include "ScavTrap.hpp"

ScavTrap:: ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap Constructor Called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}

ScavTrap:: ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap Constructor Called of the name " << name << std::endl;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}

ScavTrap:: ~ScavTrap(void){
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	if (this->energy_point > 0 && this->hit_point > 0){
		std::cout << "ScavTrap " << this->name << " Attacks " << target << " dealing " << this->attack_damage << " damage!" << std::endl;
	}
	else if (this->hit_point == 0) {
		std::cout << "Impossible to attack the target cause his hit points are already 0!!!!" << std::endl;
	}
	else
		std::cout << "Not enough energy to attack! Try to recover some!" << std::endl;
}