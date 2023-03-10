#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "Default FrapTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
	std::cout << "\e[0;35mFragTrap\e[0m [ " << name << " ] constructed." << std::endl;
}

FragTrap::	FragTrap(std::string name) : ScavTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
	std::cout << "\e[0;35mFragTrap\e[0m [ " << name << " ] constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	*this = cpy;
	std::cout << "\e[0;35mFragTrap\e[0m [ " << name << " ] constructed from copy constructor." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout <<  "\e[0;35mFrapTrap\e[0m [ " << name << " ] is destructed." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\e[0;35mFrapTrap\e[0m [ " << this->name << " ] high fives everybody." << std::endl;
}