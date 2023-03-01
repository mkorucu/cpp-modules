#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout <<"Zombie is created!" << std::endl;
}
Zombie::~Zombie()
{
	std::cout <<"Sorry, " << _name << ", it's all gone a bit pete tong." << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}