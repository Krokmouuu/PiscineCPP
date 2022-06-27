#include "Zombie.Class.hpp"

Zombie *newZombie(string name)
{
    Zombie *zombie;

    return zombie = new Zombie(name);
}