#include "ClapTrap.hpp"
ClapTrap::ClapTrap()
{
	this->name = "Default ClapTrap";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "\e[0;32mClapTrap\e[0m [ " << name << " ] is constructed." << std::endl;
}

ClapTrap::ClapTrap(std::string input): name(input), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "\e[0;32mClapTrap\e[0m [ " << name << " ] is constructed." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;32mClapTrap\e[0m [ " << this->name << " ] is destructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
	std::cout <<  "\e[0;32mClapTrap\e[0m [ " << name << " ] is constructed with copy constructor." << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& cpy )
{
    this->name = cpy.name;
    this->hitPoints = cpy.hitPoints;
    this->energyPoints = cpy.energyPoints;
    this->attackDamage = cpy.attackDamage;
    std::cout << "\e[0;32mClapTrap\e[0m [ " << this->name << " ] has been copied with copy assignment operator." << std::endl;
    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "\e[0;32mClapTrap\e[0m [ " << this->name << " ] attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		std::cout << --this->energyPoints << " energy point remained." << std::endl;
	}
	else if (this->energyPoints <= 1)
		std::cout << this->name << " has no energy point remaining to attack.." << std::endl;
	else
		std::cout << this->name << " can't throw their fists to his opponent 😵." << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "\e[0;32mClapTrap\e[0m [ " << this->name << " ] takes damage of " << amount << " from their opponent." << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0)
			std::cout << "\e[0;32mClapTrap\e[0m [ " << this->name << " ] is dead 😵😵😵." << std::endl;
		else
			std::cout << this->hitPoints << " hit point remaining." << std::endl;
	}
	else
		std::cout << "hes dead af..😵" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints-- > 0)
	{
		this->hitPoints += amount;
		std::cout << "\e[0;32mClapTrap\e[0m [ " << this->name << " ] is healed from " << this->hitPoints - amount << " to " <<this->hitPoints << std::endl;
	}
	else if (this->energyPoints <= 0)
		std::cout << "\e[0;32mClapTrap\e[0m [ " << this->name << " ] has no energy point to heal theirself." << std::endl;
	else
		std::cout << "hes dead af..😵" << std::endl;
}
