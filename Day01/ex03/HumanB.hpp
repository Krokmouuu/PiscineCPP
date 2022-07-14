#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class HumanB{

    public :

        void    attack() const;
        void    setWeapon(Weapon &weapon);
    
        HumanB(string name);
        ~HumanB();

    private :

        string _name;
        Weapon *weapon;

};


#endif