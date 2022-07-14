#include "ClapTrap.hpp"

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy <= 0)
    {
        cout << "No energy left" << endl;
        return ;
    }
    if (_health == 10)
        return ;
    _energy -= 1;
    cout << _name << " Repaired for " << amount << endl;
    _health += amount;
    cout << _name << " has " << _health << " healths" << endl;
    cout << "Energy left : " << _energy << endl;
}

unsigned int ClapTrap::getDamage(void) const
{
    return _damage;
}
unsigned int ClapTrap::getEnergy(void) const
{
    return _energy;
}

unsigned int ClapTrap::getHealth(void) const
{
    return _health;
}

string      ClapTrap::getName(void) const
{
    return _name;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    cout << _name << " take " << amount << " damage(s)" << endl;
    if (_health > amount)
        _health -= amount;
    else if (_health <= amount)
    {
        cout << _name << " died" << endl;
        exit (0);
    }
}

void    ClapTrap::attack(const string &target)
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

ClapTrap &ClapTrap::operator=(const ClapTrap &params)
{
    cout << "Copy assignement operator called" << endl;
    _name = params.getName();
    _health = params.getHealth();
    _energy = params.getEnergy();
    _damage = params.getDamage();
    return *this;
}

ClapTrap::ClapTrap(string name) : _name(name), _health(10), _energy(10), _damage(0)
{
    cout << "Constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap& params)
{
    cout << "Copy constructor called" << endl;
    *this = params;
}

ClapTrap::~ClapTrap()
{
    cout << "Destructor called" << endl;
}