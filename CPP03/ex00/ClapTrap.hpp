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
            ClapTrap(std::string input);
            ~ClapTrap();
            ClapTrap(const ClapTrap &cpy);
            ClapTrap& operator=(const ClapTrap &cpy);
    
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif