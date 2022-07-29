#include "Animal.hpp"

string const    &Animal::getType() const
{
    return this->_type;
}

void    Animal::setType(string type)
{
    this->_type = type;
}

void    Animal::makeSound() const
{
    cout << "* RANDOM ANIMAL NOISE *" << endl;
}

Animal::Animal()
{
    this->_type = "Random";
    cout << "Animal constructor called" << endl;
}

Animal::Animal(string type)
{
    this->_type = type;
    cout << this->_type << " is alive" << endl;
}

Animal::Animal(const Animal& params)
{
    cout << "Animal copy constructor called" << endl;
    *this = params;
}

Animal  &Animal::operator=(const Animal& params)
{
    cout << "Animal copy assignement operator called" << endl;
    _type = params.getType();
    return *this;
}

Animal::~Animal()
{
    cout << "Animal destructor called" << endl;
}