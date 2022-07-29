#include "Cat.hpp"

void    Cat::makeSound() const
{
    cout << "Meow Meow" << endl;
}

Cat::Cat() : Animal("Cat") {}

Cat::Cat(const Cat &params) : Animal(params) {}

Cat &Cat::operator=(const Cat & params)
{
    this->Animal::operator=(params);
    return *this;
}

Cat::~Cat()
{
    cout << "Cat destructor called" << endl;
}