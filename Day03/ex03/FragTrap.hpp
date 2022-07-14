#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :

        void highFivesGuys();
        void attack(const string &target);

        FragTrap(string name);
        FragTrap(const FragTrap &);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &params);

    protected :

        string _name;
        unsigned int _health;
        unsigned int _energy;
        unsigned int _damage;
};


#endif