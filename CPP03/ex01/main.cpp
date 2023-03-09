#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap def;
    ScavTrap a("ali");
    ScavTrap b( a );

    def = a;
    def.attack("Enemy");
    def.takeDamage(30);
    def.beRepaired(1);
    a.attack( "ahmet" );
    a.takeDamage( 10 );
    a.beRepaired( 10 );
    b.guardGate();

    return EXIT_SUCCESS;
}