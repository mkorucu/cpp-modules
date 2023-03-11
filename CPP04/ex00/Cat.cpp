#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "\e[0;36mCat\e[0m [ " << this->type << " ] is constructed." << std::endl;
}

Cat::~Cat()
{
    std::cout << "\e[0;36mCat\e[0m [ " << this->type << " ] is destructed." << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "\e[0;36mCat\e[0m [ " << this->type << " ] Hav!" << std::endl;
}