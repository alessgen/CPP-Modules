#include "FragTrap.hpp"

FragTrap:: FragTrap(): ClapTrap(){
	std::cout << "(FragTrap) costructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FragTrap:: FragTrap(std::string name): ClapTrap(name){
	std::cout << name << " (FragTrap) costructor called " << std::endl;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FragTrap:: ~FragTrap(void){
	std::cout << "(FragTrap) destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src): ClapTrap(src)
{
	std::cout << "(FragTrap) copy costructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Assignment operator of (FragTrap) called" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}
void FragTrap:: highFivesGuys(void){
	std::cout << "(FragTrap) GIVE ME HIGH FIVE BABIESSSSS!!!" << std::endl;
}

