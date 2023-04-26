#include "AMateria.hpp"

AMateria::AMateria (void){
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria::~AMateria (void){
}

AMateria::AMateria (AMateria const& src){
	*this = src;
}

AMateria &AMateria::operator=(AMateria const& src){
	this->type = src.type;
	return (*this);
}

std::string const & AMateria::getType() const{
	return (this->type);
}

void AMateria::use(ICharacter& target){
	(void)target;
}
