#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("mehmet");
    
    a.setAttackDamage(2);
    while (a.gethitPoint() > 0 )
    {
        a.takeDamage(3);
        a.attack("Enemy");
        a.beRepaired(2);
    }
}