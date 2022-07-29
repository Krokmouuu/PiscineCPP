#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>
#include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;

class Animal
{

    public:

        virtual void    makeSound() const = 0;
        void    setType(string type);
        string const &getType() const;

        Animal();
        Animal(string type);
        Animal(const Animal&);
        virtual ~Animal();

        Animal  &operator=(const Animal& params);

    protected:

        string _type;

};

#endif