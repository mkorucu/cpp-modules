#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "\e[0;36mCat\e[0m [ " << this->type << " ] is constructed." << std::endl;
    this->catbrain = new Brain();
}

Cat::Cat(const Cat &cpy)
{
    std::cout << "\e[0;36mCat\e[0m copy constructer is called." << std::endl;
    *this = cpy;
}

Cat& Cat::operator=(const Cat& cpy)
{
    std::cout << "\e[0;36mCat\e[0m copy assignment operator is called." << std::endl;
    if(this->getType() == cpy.getType() && this != &cpy)
    {
        this->catbrain = new Brain( *cpy.catbrain);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "\e[0;36mCat\e[0m [ " << this->type << " ] is destructed." << std::endl;
    delete this->catbrain;
}

void    Cat::makeSound() const
{
    std::cout << "\e[0;36mCat\e[0m [ " << this->type << " ] Meow!" << std::endl;
}