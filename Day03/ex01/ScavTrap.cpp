#include "ScavTrap.hpp"

void    ScavTrap::guardGate()
{
    cout << "ScavTrap est entré en mode Gate keeper." << endl << endl;
}

void    ScavTrap::attack(const string &target)
{
    if (_energy <= 0)
    {
        cout << "No energy left" << endl;
        return ;
    }
    if (_damage <= 1)
        cout << _name << " deal " << this->_damage << " damage " << "to " << target << endl;
    else
        cout << _name << " deal " << this->_damage << " damages " << "to " << target << endl;
    _energy -= 1;
    cout << "Energy left : " << _energy << endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &params)
{
    cout << "ScavTrap operator called" << endl;
    _name = params.getName();
    _health = params.getHealth();
    _energy = params.getEnergy();
    _damage = params.getDamage();
    return *this;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name), _name(name), _health(100), _energy(50), _damage(20)
{
    cout << "Constructor ScavTrap" << endl;
    guardGate();
}

ScavTrap::ScavTrap(const ScavTrap &params) : ClapTrap(params)
{
    cout << "ScavTrap copy constructor called" << endl;
    *this = params;
}

ScavTrap::~ScavTrap()
{
    cout << "Destructor ScavTrap" << endl;
}
