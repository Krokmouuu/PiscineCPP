#include "Zombie.Class.hpp"

void    Zombie::setName(string name)
{
    this->_name = name;
}

string   Zombie::getName()
{
    return _name;
}

void    Zombie::announce(int i)
{
    cout << getName() << ": BraiiiiiiinnnzzzZ... " << i << endl;
}

Zombie::Zombie() : _name("Marc") {}

Zombie::Zombie(string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    cout << getName() << " has been killed" << endl;
}