#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap    a("Clap");
    ScavTrap    b("Scav");
    FragTrap    c("Frag");
    DiamondTrap d("Diamond");

    cout << endl;

    a.attack("AA");
    a.takeDamage(0);
    a.beRepaired(4);

    cout << endl;

    b.attack("BB");
    b.takeDamage(0);
    b.beRepaired(4);

    cout << endl;

    c.attack("CC");
    c.takeDamage(0);
    c.beRepaired(4);
    
    cout << endl;

    d.attack("DD");
    d.takeDamage(0);
    d.beRepaired(4);
    cout << endl;
    d.guardGate();
    d.highFivesGuys();
    d.whoIam();
    
    cout << endl;

    return (0);
}