#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "\e[0;35mCat\e[0m [ " << this->type << " ] is constructed." << std::endl;
}

Cat::~Cat()
{
    std::cout << "\e[0;35mCat\e[0m [ " << this->type << " ] is destructed.";
}

void    Cat::makeSound()
{
    std::cout << "Meow!" << std::endl;
}