#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.Class.hpp"
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