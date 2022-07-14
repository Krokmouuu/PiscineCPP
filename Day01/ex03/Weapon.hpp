#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Weapon {

    public :

        string  getWeapon() const;
        void    setWeapon(string weapon);

        string  getType() const;
        void    setType(string type);
    
        Weapon(string weapon);
        ~Weapon();

    private : 

        string _weapon;
};

#endif