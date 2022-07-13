#include "ClapTrap.Class.hpp"

int main()
{
    ClapTrap    a("Bonjour");

    a.attack("Bonsoir");
    a.takeDamage(9);
    a.beRepaired(5);

    return (0);
}