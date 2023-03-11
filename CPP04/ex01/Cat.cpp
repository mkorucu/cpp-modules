#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "\e[0;36mCat\e[0m [ " << this->type << " ] is constructed." << std::endl;
    this->Catbrain = new Brain();
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
        this->Catbrain = new Brain( *cpy.Catbrain);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "\e[0;36mCat\e[0m [ " << this->type << " ] is destructed." << std::endl;
    delete this->Catbrain;
}

void    Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}