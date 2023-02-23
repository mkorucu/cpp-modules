#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": >: BraiiiiiiinnnzzzZ.."<<std::endl;
}

void	Zombie::Zombie(std::string isim)
{
	name = isim;
}