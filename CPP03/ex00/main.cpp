#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("mehmet");
    
    a.attack("Enemy");
    a.beRepaired(4);
    a.takeDamage(4);
}