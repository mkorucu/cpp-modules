#include "Zombie.hpp"

int	main(int ac, char **av)
{
	int	n = 4;
	Zombie	*zombieCrowd = zombieHorde(n, "alfred");
	for(int i = 0; i < n; i++)
		zombieCrowd[i].announce();
	delete [] zombieCrowd;
}