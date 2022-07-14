#include "ScavTrap.hpp"

int main()
{
    ClapTrap    a("Clap");
    ScavTrap    b("Scav");

    a.attack("AA");
    a.takeDamage(0);
    a.beRepaired(4);

    cout << endl;

    b.attack("BB");
    b.takeDamage(0);
    b.beRepaired(4);

    return (0);
}