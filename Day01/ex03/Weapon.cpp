#include "Weapon.hpp"


void    Weapon::setType(string weapon)
{
    this->_weapon = weapon;
}

string    Weapon::getType() const
{
    return _weapon;
}

void    Weapon::setWeapon(string weapon)
{
    this->_weapon = weapon;
}

string  Weapon::getWeapon() const
{
    return _weapon;
}

Weapon::Weapon(string weapon)
{
    setWeapon(weapon);
}

Weapon::~Weapon() {}