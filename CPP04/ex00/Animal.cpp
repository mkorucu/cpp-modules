#include "Animal.hpp"

Animal::Animal(): type("unknown")
{
	std::cout << "\e[0;32mAnimal\e[0m [ " << this->type << " ] is constructed." << std::endl;
}

Animal::Animal(std::string input): type(input)
{
	std::cout << "\e[0;32mAnimal\e[0m [ " << this->type << " ] is constructed." << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	*this = cpy;
	std::cout << "\e[0;32mAnimal\e[0m [ " << this->type << " ] is constructed with copy constructor." << std::endl;
}
Animal &Animal::operator=(const Animal &cpy)
{
	if (this != &cpy)
		this->type = cpy.type;
	std::cout << "\e[0;32mAnimal\e[0m [ " << this->type << " ] is constructed with copy assignment operator." << std::endl;
	return (*this);
}

void	Animal::makeSound()
{
	std::cout << "\e[0;32mAnimal\e[0m [ " << this->type << " ] makeSound called.";
}

void	Animal::~Animal()
{
	std::cout << "\e[0;32mAnimal\e[0m [ " << this->type << " ] is destructed.";
}

std::string Animal::getType() {return this->type;}