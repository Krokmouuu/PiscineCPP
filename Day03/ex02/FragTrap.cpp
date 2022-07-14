#include "FragTrap.hpp"

void    FragTrap::attack(const string &target)
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

void    FragTrap::highFivesGuys()
{
    cout << "FragTrap want to high fives" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap& params)
{
     cout << "FragTrap operator called" << endl;
    _name = params.getName();
    _health = params.getHealth();
    _energy = params.getEnergy();
    _damage = params.getDamage();
    return *this;
}

FragTrap::FragTrap(string name) : ClapTrap(name), _name(name), _health(100), _energy(100), _damage (30)
{
    cout << "FragTrap constructor called" << endl;
    highFivesGuys();
}

FragTrap::FragTrap(const FragTrap& params) : ClapTrap(params)
{
    cout << "FragTrap copy constructor called" << endl;
    *this = params;
}

FragTrap::~FragTrap()
{
    cout << "FragTrap destructor called" << endl;
}