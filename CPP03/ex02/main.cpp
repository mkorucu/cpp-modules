#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap a("ali");
    ScavTrap b( a );

    a.attack( "ahmet" );
    a.takeDamage( 10 );
    a.beRepaired( 10 );
    b.guardGate();

    return EXIT_SUCCESS;
}