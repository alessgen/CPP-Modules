#include "Dog.hpp"

Dog::Dog(void){
	std::cout << "Default Dog Costructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(void){
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(std::string name){
	std::cout << "Costructor named as " << name << " Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const& src): Animal() {
	std::cout << "Dog Copy Costructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(Dog const& src){
	std::cout << "Dog Copy Assignment Costructor called" << std::endl;
	this->type = src.type;
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "BAU! BAU! BAU!" << std::endl;
}