#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default Cat Costructor called" << std::endl;
    this->type = "Cat";
	this->attribute = new Brain();
}

Cat::~Cat(void) {
	delete this->attribute;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(std::string name) {
    std::cout << "Costructor named as " << name << " called" << std::endl;
    this->type = "Cat";
	this->attribute = new Brain();
}

Cat::Cat(Cat const& src): Animal(src) {
    std::cout << "Cat Copy Costructor called" << std::endl;
	this->attribute = new Brain(*src.attribute);
}

Cat &Cat::operator=(Cat const& src) {
    std::cout << "Cat Copy Assignment Costructor called" << std::endl;
    this->type = src.type;
	this->attribute = new Brain(*src.attribute);
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow, Meow, Meow" << std::endl;
}

Brain* Cat::getBrain(void) const{
	return this->attribute;
}

