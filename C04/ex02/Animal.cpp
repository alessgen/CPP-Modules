#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Constructor" << this->type << std::endl;
	this->type = "Animal type";
}

Animal::~Animal(){
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(std::string name){
	std::cout << "Animal Name Constructor" << this->type << std::endl;
	this->type = name;
}

Animal::Animal(Animal const& src){
	std::cout << "Animal Copy costructor called" << this->type << std::endl;
	*this = src;
}

Animal &Animal::operator=(Animal const &src){
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

std::string Animal::getType(void) const{
	return (this->type);
}
