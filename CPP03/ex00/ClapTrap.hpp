#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

    public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &cpy);
	ClapTrap& operator=(const ClapTrap &cpy);
	
	ClapTrap(std::string input);
	void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif