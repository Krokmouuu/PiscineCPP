#include "Zombie.hpp"

Zombie *zombieHorde(int n, string name);

int main()
{
    int n = 5;
    Zombie *first;
    string name = "Marc";

    first = zombieHorde(n, name);
    delete[] first;
}