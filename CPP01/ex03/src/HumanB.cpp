#include "../lib/HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->name = _name;
}
HumanB::~HumanB(void)
{
	std::cout << "HumanB deconstructed" << std::endl;
}

void	HumanB::setWeapon(Weapon& _weapon)
{
	this->weapon = &_weapon;
}

void    HumanB::attack()
{
	    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
