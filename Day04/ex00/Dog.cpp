#include "Dog.hpp"

void    Dog::makeSound() const
{
    cout << "BARK BARK BARK" << endl;
}

Dog::Dog() : Animal("Dog") {}

Dog::Dog(const Dog &params) : Animal(params) {}

Dog  &Dog::operator=(const Dog& params)
{
    cout << "Dog copy assignement operator called" << endl;
    this->Animal::operator=(params);
    return *this;
}

Dog::~Dog()
{
    cout << "Dog destructor called" << endl;
}