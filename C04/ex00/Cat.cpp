#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default Cat Costructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat(void) {
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(std::string name) {
    std::cout << "Costructor named as " << name << " called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const& src): Animal() {
    std::cout << "Cat Copy Costructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(Cat const& src) {
    std::cout << "Cat Copy Assignment Costructor called" << std::endl;
    this->type = src.type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow, Meow, Meow" << std::endl;
}