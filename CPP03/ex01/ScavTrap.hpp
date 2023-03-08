#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <stdio.h>
class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &cpy); 
    
    ScavTrap &operator=(const ScavTrap &cpy);
    void    attack(std::string const& target);
    void    guardGate();
};

#endif