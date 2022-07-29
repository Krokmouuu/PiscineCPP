#include "ClapTrap.hpp"

int main()
{
    ClapTrap    a("Clap");

    a.attack("Trap");
    a.takeDamage(1);
    a.beRepaired(4);

    return (0);
}