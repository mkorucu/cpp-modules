#include "Dog.hpp"
Dog::Dog(): Animal("Dog")
{
	std::cout << "\e[0;Dog\e[0m [ " << this->type << " ] is constructed." << std::endl;

}
Dog::~Dog()
{
    std::cout << "\e[0;Dog\e[0m [ " << this->type << " ] is destructed." << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "\e[0;Dog\e[0m [ " << this->type << " ] Hav!" << std::endl;
}