#include "Cat.hpp"

void    Cat::makeSound() const
{
    cout << "Meow Meow" << endl;
}

Cat::Cat() : Animal("Cat")
{
    c = new Brain();
}

Cat::Cat(const Cat &params) : Animal(params)
{
    c = new Brain(*params.c);
}

Cat &Cat::operator=(const Cat & params)
{
    this->Animal::operator=(params);
    *c = *params.c;
    return *this;
}

Cat::~Cat()
{
    cout << "Cat destructor called" << endl;
    delete c;
}