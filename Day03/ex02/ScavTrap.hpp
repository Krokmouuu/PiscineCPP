#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

    public :

        void guardGate();

        void attack(const string &target);
    
        ScavTrap(string name);
        ScavTrap(const ScavTrap&);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap& params);

    private :

        string _name;
        unsigned int _health;
        unsigned int _energy;
        unsigned int _damage;
};



#endif