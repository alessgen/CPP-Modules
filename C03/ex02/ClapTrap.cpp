#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	this->name = "";
	this->energy_point = 10;
	this->hit_point = 10;
	this->attack_damage = 2;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap Name constructor called" << std::endl;
	this->name = name;
	this->energy_point = 10;
	this->hit_point = 10;
	this->attack_damage = 2;
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
		std::cout << this->name << " attacks " << target << ", Causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point--;
	}
	else
		std::cout << this->name << " Has not enought energy point to perform any action!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (amount > this->hit_point)
		this->hit_point = 0;
	else
		this->hit_point -= amount;
	std::cout << this->name << " Has taken " << \
		this->attack_damage << " points of damage!" << std::endl;
	std::cout << this->name << " Now has " << this->hit_point << " hit point left" << std::endl;
	if (this->hit_point == 0)
	{
		std::cout << this->name << " is dead" << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy_point > 0 && this->hit_point < 10)
	{
		std::cout << this->name << " is repairing his self and healed for " << amount << std::endl;
		this->hit_point += amount;
		if (this->hit_point > 10)
		{
			std::cout << "Max hit point reached!" << std::endl;
			this->hit_point = 10;
		}
		std::cout << this->name << " his hit points are " << this->hit_point << std::endl;
		this->energy_point--;
	}
	else if (this->hit_point == 10)
		std::cout << "You already got Max health!!" << std::endl;
	else
		std::cout << this->name << " Has not enough energy to perform any action!" << std::endl;
}