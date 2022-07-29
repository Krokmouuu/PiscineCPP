#include "WrongAnimal.hpp"

void    WrongAnimal::makeSound() const
{
    cout << "* Some bubbles pulse out of the ooze *" << endl;
}

string  WrongAnimal::getType() const
{
    return _type;
}

void    WrongAnimal::setType(string type)
{
    _type = type;
}

WrongAnimal::WrongAnimal()
{
    setType("Ooze");
    cout << "Wrong Animal constructor called" << endl;
}

WrongAnimal::WrongAnimal(string type)
{
    this->_type = type;
    cout << getType() << " is born" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &params)
{
    *this = params;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &params)
{
    cout << "WrongAnimal operator" << endl;
    _type = params.getType();
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    cout << "Ooze disappear.." << endl;
}