#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class Brain {

    public:
        std::string ideas[100];
        Brain(void); // Costructor
        ~Brain(void); // Destructor
        Brain &operator=(Brain const &src); // Copy Assignment operator
        Brain(Brain const& src); //Copy Operator

        std::string getIdea(int index) const;
};

#endif