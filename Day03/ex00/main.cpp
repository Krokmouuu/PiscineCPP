#include "ClapTrap.hpp"

int main()
{
    ClapTrap    a("Clap");

    a.attack("Trap");
    a.takeDamage(0);
    a.beRepaired(4);

    return (0);
}