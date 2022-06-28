#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Zombie
{
    public :

            string getName();
            void setName(string name);
            void   announce();

            Zombie();
            Zombie(string name);
            ~Zombie();


    private :
    
         string _name;
};

#endif