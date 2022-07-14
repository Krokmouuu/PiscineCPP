#include "DiamondTrap.hpp"

void    DiamondTrap::attack(const string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoIam()
{
    cout << _name << " " << ClapTrap::getName() << endl;
    cout << "Health " << _health << endl;
    cout << "Energy " << _energy << endl;
    cout << "Damage " << _damage << endl;
}

DiamondTrap::DiamondTrap(const string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name), _health(FragTrap::_health), _energy(ScavTrap::_energy), _damage(FragTrap::_damage)
{
    cout << "DiamondTrap constructor called" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& params) : ClapTrap(params), FragTrap(params), ScavTrap(params)
{
    cout << "Copy DiamondTrap constructor called" << endl;
    *this = params;
}

DiamondTrap::~DiamondTrap()
{
    cout << "DiamondTrap destructor called" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& params)
{
    cout << "DiamondTrap operator called" << endl;
    _name = params.getName();
    _health = params.getHealth();
    _energy = params.getEnergy();
    _damage = params.getDamage();
    return *this;
}