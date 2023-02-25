#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapon)
{
    this->name = _name;
    this->weapon = _weapon;
}

HumanA::~HumanA()
{
std::cout <<this->name << " is deconstructed.." << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}