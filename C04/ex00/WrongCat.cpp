#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "Default WrongCatCostructor called" << std::endl;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(std::string name) {
    std::cout << "Costructor named as"  << name <<  "called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& src): WrongAnimal() {
    std::cout << "WrongCatCopy Costructor called" << std::endl;
    (void)src;
}

WrongCat &WrongCat::operator=(WrongCat const& src) {
    std::cout << "WrongCat Copy Assignment Costructor called" << std::endl;
    (void)src;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "Bee, Bee" << std::endl;
}
