#include "Zombie.hpp"

void    Zombie::announce()
{
    cout << getName() << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
    setName(name);
    announce();
}

Zombie::~Zombie()
{
    cout << getName() << " has been killed" << endl;
}

string  Zombie::getName() const
{
    return Zombie::_name;
}

string  Zombie::setName(string name)
{
    return this->_name = name;
}