#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}

Zombie::Zombie(std::string isim)
{
	_name = isim;
}

Zombie::~Zombie()
{
	std::cout <<"Sorry, " << _name << ", it's all gone a bit pete tong." << std::endl;
}