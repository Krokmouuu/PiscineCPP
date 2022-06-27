#include "Zombie.Class.hpp"

Zombie *zombieHorde(int n, string name)
{
    Zombie *zombie;

    if (n < 0)
        return NULL;
    zombie = new Zombie[n];
    for (int i = 1; i < n + 1; i++)
    {
        zombie[i].setName(name);
        zombie->announce(i);
    }
    return zombie;
}