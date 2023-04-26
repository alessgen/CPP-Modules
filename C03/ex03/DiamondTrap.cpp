#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), name("Default") {
	this->FragTrap::hit_point = 100;
	this->ScavTrap::energy_point = 50;
	this->FragTrap::attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name) {
	std::cout << this->name << " (DiamondTrap) costructor called" << std::endl;
	this->FragTrap::hit_point = 100;
	this->ScavTrap::energy_point = 50;
	this->FragTrap::attack_damage = 30;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "(DiamondTrap) destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src): ClapTrap(src), FragTrap(), ScavTrap() {
	std::cout << this->name << "(DiamondTrap) copy costructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src)
{
	ClapTrap::operator=(src);
	ScavTrap();
	FragTrap();
	return *this;
}

void DiamondTrap::attack(const std::string& target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "whoAmI(): I am DiamondTrap " << this->name << " and my ClapTrap name is " << this->ClapTrap::name << std::endl;
}
