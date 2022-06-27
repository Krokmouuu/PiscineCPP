#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Zombie {

public:

    string getName() const;
    string setName(string name);
    void   announce();
    void randomChump(std::string name);
    Zombie* newZombie(std::string name);

    Zombie(string name);
    ~Zombie();

private:

   string _name;

};

#endif