#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *_newZombie = new Zombie(name); //calling from heap
	return (_newZombie);
}