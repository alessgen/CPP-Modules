#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->materia[i])
			delete this->materia[i];
}

MateriaSource::MateriaSource(MateriaSource const& src){
    for (int i = 0; i < 4; i++) {
        if (src.materia[i])
            this->materia[i] = src.materia[i]->clone();
        else
            this->materia[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const& src) {
	if (this != &src)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; i++)
			this->materia[i] = (src.materia[i]) ? src.materia[i]->clone() : NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->materia[i])
			{
				this->materia[i] = m;
				break;
			}
		}
		if (this->index >= 4)
			return;
		else
			this->index++;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int idx = 0; idx < 4; idx++) {
        if (idx < this->index && type == this->materia[idx]->getType()) {
            return (this->materia[idx]->clone());
        }
	}
    return (NULL);
}