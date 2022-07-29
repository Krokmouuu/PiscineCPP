#include "WrongCat.hpp"

void    WrongCat::makeSound() const
{
    cout << "Meuwoouooooow" << endl;
}

WrongCat::WrongCat() : WrongAnimal("WrongCat") {}

WrongCat::WrongCat(const WrongCat &params) : WrongAnimal(params) {}

WrongCat    &WrongCat::operator=(const WrongCat &params)
{
    this->WrongAnimal::operator=(params);
    return *this;
}

WrongCat::~WrongCat()
{
    cout << "A weird thing with furries stop moving" << endl;
}

