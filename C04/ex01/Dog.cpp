#include "Dog.hpp"

Dog::Dog(void){
	std::cout << "Default Dog Costructor called" << std::endl;
    this->type = "Dog";
	this->attribute = new Brain();
}

Dog::~Dog(void){
	delete this->attribute;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(std::string name){
	std::cout << "Costructor named as " << name << " Called" << std::endl;
    this->type = "Dog";
	this->attribute = new Brain();
}

Dog::Dog(const Dog& src): Animal(src) {
	std::cout << "Dog Copy Costructor called" << std::endl;
	this->attribute = new Brain(*src.attribute);
}

Dog &Dog::operator=(Dog const& src){
	std::cout << "Dog Copy Assignment Costructor called" << std::endl;
	this->type = src.type;
	this->attribute = new Brain(*src.attribute);
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "BAU! BAU! BAU!" << std::endl;
}

Brain* Dog::getBrain(void) const{
	return this->attribute;
}
