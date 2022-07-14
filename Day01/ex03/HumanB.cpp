#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &weapon)
{
   this->weapon = &weapon;
}

void    HumanB::attack() const
{
    cout << _name << " attacks with their " << weapon->getType() << endl;
}

HumanB::HumanB(string name) : _name(name), weapon(NULL) {}

HumanB::~HumanB() {}