#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("mehmet");
    ClapTrap b(a);
    a.attack("Enemy");
    a.beRepaired(4);
    a.takeDamage(4);
    return (0);
}