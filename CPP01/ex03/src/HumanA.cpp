#include "../lib/HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapon) : weapon(_weapon), name(_name)
{

}

HumanA::~HumanA()
{
std::cout <<this->name << " is deconstructed.." << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}