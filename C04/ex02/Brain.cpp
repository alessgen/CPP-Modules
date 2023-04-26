#include "Brain.hpp"

Brain::Brain(void) {
    const std::string ideasexample[] = { "I want to sleep",
                                         "I want to eat",
                                         "I want to drink",
                                         "I want go outside",
                                         "I want play with some human",
                                         "I want be petted",
    };
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ideasexample[rand() % 6];
    std::cout << "Brain Costructor called" << std::endl;
}

Brain::~Brain(void) {
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(Brain const& src) {
    std::cout << "Brain Copy Costructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(Brain const& src) {
    std::cout << "Brain Copy Assignment operator called" << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
	return (*this);
}

std::string Brain::getIdea(int index) const{
	return(this->ideas[index]);
}
