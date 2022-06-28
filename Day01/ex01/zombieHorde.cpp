#include "Zombie.Class.hpp"

Zombie *zombieHorde(int N, string name)
{
    Zombie *zombie;

    if (N < 0)
        return NULL;
    zombie = new Zombie[N];
    for (int i = 1; i < N + 1; i++)
    {
        zombie[i].setName(name);
        zombie[i].announce();
    }
    return zombie;
}