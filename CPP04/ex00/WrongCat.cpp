#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "\e[0;36mWrongCat\e[0m [ " << this->type << " ] is constructed." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "\e[0;36mWrongCat\e[0m [ " << this->type << " ] is destructed." << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}