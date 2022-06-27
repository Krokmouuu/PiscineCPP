#include "Zombie.Class.hpp"
#include <iostream>

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie  *start;
    string name = "maandre";

    start = newZombie(name);
    name = "anonis";
    randomChump(name);
    delete start;
}