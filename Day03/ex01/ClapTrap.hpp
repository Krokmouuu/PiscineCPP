#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{

    public:

        void attack(const string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        unsigned int getDamage(void) const;
        unsigned int getEnergy(void) const;
        unsigned int getHealth(void) const;
        string       getName(void) const;

        ClapTrap(string name);
        ClapTrap(const ClapTrap&);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap& params);

    protected:

        string _name;
        unsigned int _health;
        unsigned int _energy;
        unsigned int _damage;

};

#endif