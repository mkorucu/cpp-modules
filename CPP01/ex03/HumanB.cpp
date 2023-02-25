#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : weapon(NULL),  name(_name)
{

}
HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon& _weapon)
{
	this->weapon = &_weapon;
}

void    HumanB::attack()
{
	    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
