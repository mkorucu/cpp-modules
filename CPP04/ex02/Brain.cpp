#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\e[0;33mBrain\e[0m is constructed." << std::endl; 
}

Brain::~Brain()
{
	std::cout << "\e[0;33mBrain\e[0m is destroyed." << std::endl; 
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "\e[0;33mBrain\e[0m copy constructer called." << std::endl; 
	*this = cpy;
}

Brain &Brain::operator=(const Brain &cpy)
{
	if (this != &cpy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = cpy.ideas[i];
	}
	return (*this);
}