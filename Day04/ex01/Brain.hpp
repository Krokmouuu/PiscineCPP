#ifndef  BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

class Brain
{
    public :

        string *ideas[100];

        string getIdeas(int i) const;

        Brain();
        Brain(const Brain &);
        ~Brain();

        Brain   &operator=(const Brain &);
};

#endif