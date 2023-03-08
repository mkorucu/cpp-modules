#include "ScavTrap.hpp"
ScavTrap::ScavTrap()
{
    this->hitPoints = 100;
    this->name = name;
    this->attackDamage = 20;
    std::cout << "Default ScavTrap is constructed" << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->hitPoints = 100;
    this->attackDamage = 20;
    std::cout << "ScavTrap [ " << this->name << " ] is constructed" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap [ " << this->name << " ] is destructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
    *this = cpy;
    std::cout << "ScavTrap [ " << this->name << " ] has been copied with copy constuctor." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
    this->name = cpy.name;
    this->energyPoints = cpy.energyPoints;
    this->hitPoints = cpy.hitPoints;
    this->attackDamage = cpy.attackDamage;
    std::cout << "ScavTrap [ " << this->name << " ] has been copied with copy assignment operator." << std::endl;   
    return *this;
}

void    ScavTrap::attack(std::string const &target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap [ " << this->name << " ] attacks" << target << " at range, causing " << this->attackDamage << " points of damage !" << std::endl;
        std::cout << "They have " << --this->energyPoints << " energy points remaining.." << std::endl;
    }
    else if (this->energyPoints <= 0)
        std::cout << "ScavTrap [ " << this->name << " ] has no energy to attack.." << std::endl;
    else
        std::cout << "Nigga already dead af 😵😵" << std::endl;
}
void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap [ " << this->name << " ] is now in guardGate mode" << std::endl;
}
