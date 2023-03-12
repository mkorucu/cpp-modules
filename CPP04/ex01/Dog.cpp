#include "Dog.hpp"
Dog::Dog(): Animal("Dog")
{
	std::cout << "\e[0;35mDog\e[0m [ " << this->type << " ] is constructed." << std::endl;
    this->dogBrain = new Brain();

}
Dog::~Dog()
{
    std::cout << "\e[0;35mDog\e[0m [ " << this->type << " ] is destructed." << std::endl;
    delete this->dogBrain;
}

Dog::Dog(const Dog &cpy)
{
    std::cout << "\e[0;35mDog\e[0m copy constructer is called." << std::endl;
    *this = cpy;
}

Dog& Dog::operator=(const Dog &cpy)
{
    std::cout << "\e[0;35mDog\e[0m copy assignment operator is called." << std::endl;
    if (this != &cpy)
    {
        this->type = cpy.type;
        this->dogBrain = new Brain(*cpy.dogBrain);
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "\e[0;35mDog\e[0m [ " << this->type << " ] Hav!" << std::endl;
}