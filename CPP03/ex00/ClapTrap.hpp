#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    private:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;

    public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &cpy);
	ClapTrap& operator=(const ClapTrap &cpy);
	ClapTrap(std::string input);
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
	std::string	getName();
	int	gethitPoint();
	void	setAttackDamage(unsigned int ad);
};

#endif