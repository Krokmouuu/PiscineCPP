#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public :

        void    whoIam();
        void attack(const string &target);

        DiamondTrap(const string &name);
        DiamondTrap(const DiamondTrap&);
        ~DiamondTrap();

        DiamondTrap &operator=(const DiamondTrap& params);

    private :

        string _name;
        unsigned int _health;
        unsigned int _energy;
        unsigned int _damage;

};

#endif