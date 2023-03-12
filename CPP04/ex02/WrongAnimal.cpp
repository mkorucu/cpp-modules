#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("unknown")
{
	std::cout << "\e[0;32mWrongAnimal\e[0m [ " << this->type << " ] is constructed." << std::endl;
}

WrongAnimal::WrongAnimal(std::string input): type(input)
{
	std::cout << "\e[0;32mWrongAnimal\e[0m [ " << this->type << " ] is constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	*this = cpy;
	std::cout << "\e[0;32mWrongAnimal\e[0m [ " << this->type << " ] is constructed with copy constructor." << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
	if (this != &cpy)
		this->type = cpy.type;
	std::cout << "\e[0;32mWrongAnimal\e[0m [ " << this->type << " ] is constructed with copy assignment operator." << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "\e[0;32mWrongAnimal\e[0m [ " << this->type << " ] makeSound called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;32mWrongAnimal\e[0m [ " << this->type << " ] is destructed." << std::endl;
}

std::string WrongAnimal::getType() const {return this->type;}