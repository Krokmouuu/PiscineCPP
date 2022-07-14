#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : _name(name), weapon(weapon) {}

void   HumanA::attack() const
{
    cout << _name << " attacks with their " << weapon.getType() << endl;
} 

HumanA::~HumanA() {}