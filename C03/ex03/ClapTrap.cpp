#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("default"), hit_point(10), energy_point(10), attack_damage(0) {
	std::cout << "(ClapTrap) default costructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "(ClapTrap) destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), energy_point(10), attack_damage(0) {
	std::cout << name << " (ClapTrap) costructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& f) {
	// Copy Assignment operator called
	this->name = f.name;
	this->hit_point = f.hit_point;
	this->energy_point = f.energy_point;
	this->attack_damage = f.attack_damage;
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &f){
	*this = f;
}

void ClapTrap::attack(const std::string &target) {
	if (this->hit_point == 0)
	{
		std::cout << this->name << "is dead" << std::endl;
		return ;
	}
	else if (this->energy_point > 0)
	{
		std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point--;
	}
	else
		std::cout << this->name << " has not enought energy point to perform any action!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (amount > this->hit_point)
		this->hit_point = 0;
	else
		this->hit_point -= amount;
	std::cout << this->name << " has taken " << amount << " points of damage" << " and now has " << this->hit_point << " hit point left" << std::endl;
	if (this->hit_point == 0)
	{
		std::cout << this->name << " is dead" << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy_point > 0)
	{
		this->hit_point += amount;
		this->energy_point--;
		std::cout << this->name << " is repairing his self and healed for " << amount << ". Now its hit points are " << this->hit_point << std::endl;
	}
	else
		std::cout << this->name << " has not enough energy to perform any action!" << std::endl;
}