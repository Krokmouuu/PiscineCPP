#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
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