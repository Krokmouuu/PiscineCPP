#include "Dog.hpp"
#include "Brain.hpp"

void    Dog::makeSound() const
{
    cout << "BARK BARK BARK" << endl;
}

Dog::Dog() : Animal("Dog")
{
    d = new Brain();
}

Dog::Dog(const Dog &params) : Animal(params)
{
    d = new Brain(*params.d);
}

Dog  &Dog::operator=(const Dog& params)
{
    cout << "Dog copy assignement operator called" << endl;
    this->Animal::operator=(params);
    *d = *params.d;
    return *this;
}

Dog::~Dog()
{
    cout << "Dog destructor called" << endl;
    delete d;
}