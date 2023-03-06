#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(NULL) , energyPoint(10), attackDamage(0), hitPoint(10)
{
    std::cout << "Nameless ClapTrap constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string input): name(input)
{
    std::cout << "ClapTrap " << name << " constructed" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &cpy): name(cpy.name), hitPoint(cpy.hitPoint), energyPoint(cpy.energyPoint), attackDamage(cpy.attackDamage)
{
    std::cout <<  "ClapTrap " << name << " constructed fron copy constructor." << std::endl;
}
