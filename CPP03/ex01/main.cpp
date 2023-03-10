#include "ScavTrap.hpp"

// int main( void )
// {
//     ScavTrap def;
//     ScavTrap a("ali");
//     ScavTrap b( a );

//     def = a;
//     def.attack("Enemy");
//     def.takeDamage(30);
//     def.beRepaired(1);
//     a.attack( "ahmet" );
//     a.takeDamage( 10 );
//     a.beRepaired( 10 );
//     b.guardGate();

//     return EXIT_SUCCESS;
// }

int main( void )
{
    ScavTrap ash( "Ash" );
    ScavTrap ash2( ash );

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.guardGate();

    return EXIT_SUCCESS;
}