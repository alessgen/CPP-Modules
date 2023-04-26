#include "Character.hpp"

Character::Character(std::string name){
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::~Character(void){
}

Character::Character(const Character& src): name(src.name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = (src.inventory[i]) ? src.inventory[i]->clone() : NULL;
}

Character &Character::operator=(Character const& src) {
    if (this != &src)
	{
		this->~Character();
		this->name = src.name;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = (src.inventory[i]) ? src.inventory[i]->clone() : NULL;
	}
	return *this;
}

std::string const & Character::getName() const{
    return (this->name);
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->inventory[i])
			{
				this->inventory[i] = m;
				break;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
		this->inventory[idx]->use(target);
}




