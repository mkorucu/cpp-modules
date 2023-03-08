#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(NULL) , hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "Default ClapTrap constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string input): name(input) , hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy): name(cpy.name), hitPoint(cpy.hitPoint), energyPoint(cpy.energyPoint), attackDamage(cpy.attackDamage)
{
	std::cout <<  "ClapTrap " << name << " constructed fron copy constructor." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		std::cout << --this->energyPoint << " energy point remained" << std::endl;
	}
	else if (this->energyPoint <= 1)
		std::cout << this->name << " has no energy point remaining to attack.." << std::endl;
	else
		std::cout << this->name << " can't throw their fists to his opponent 😵" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " takes damage of " << amount << " from their oponent" << std::endl;
		this->hitPoint -= amount;
		if (this->hitPoint <= 0)
			std::cout << "ClapTrap " << this->name << " is dead 😵😵😵" << std::endl;
		else
			std::cout << this->hitPoint << " hit point remaining" << std::endl;
	}
	else
		std::cout << "hes dead af..😵" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint > 0 && this->energyPoint-- > 0)
	{
		this->hitPoint += amount;
		std::cout << "ClapTrap " << this->name << "'s heal is increased from " << this->hitPoint - amount << " to " <<this->hitPoint << std::endl;
	}
	else if (this->energyPoint <= 0)
		std::cout << "ClapTrap " << this->name << " has no energy point to heal theirself" << std::endl;
	else
		std::cout << "hes dead af..😵" << std::endl;
}

std::string	ClapTrap::getName() {return (this->name);}

int	ClapTrap::gethitPoint() {return (this->hitPoint);}

void	ClapTrap::setAttackDamage(unsigned int ad){
	this->attackDamage = static_cast<int>(ad);
}