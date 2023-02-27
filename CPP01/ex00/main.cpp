#include "Zombie.hpp"

int	main()
{
	std::string	name;
	Zombie		*_heapZombie;

	std::cout << "randomChump() calling" << std::endl;
	randomChump("Random");
	std::cout << "New Zombie arises from dead on the stack" << std::endl;
	std::cout << "name of the Zombie is: ";
	std::cin >> name;
	Zombie	_stackZombie(name);

	std::cout << "Another Zombie arises from dead on the heap" << std::endl;
	std::cout << "name of the Zombie is: ";
	std::cin >> name;
	_heapZombie = newZombie(name);
	_heapZombie->announce();
	delete	_heapZombie;
	return (0);
}