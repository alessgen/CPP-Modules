#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal Constructor" << this->type << std::endl;
	this->type = "Wrong Animal type";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string delfino){
	std::cout << "WrongAnimal Constructor" << this->type << std::endl;
	this->type = delfino;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src){
	std::cout << "WrongAnimal Constructor assignment" << this->type << std::endl;
	(void)src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src){
	(void)src;
	return (*this);
}

std::string WrongAnimal::getType(void) const{
	return (this->type);
}

void WrongAnimal::makeSound() const{
	std::cout << "NO SOUND MOTHERFUCKER" << std::endl;
}
