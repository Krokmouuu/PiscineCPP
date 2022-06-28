#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include "Weapon.Class.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class HumanA{

    public :

        void      attack() const;

        HumanA(string name, Weapon &weapon);
        ~HumanA();

    private :

        string    _name;
        Weapon    &weapon;


};


#endif