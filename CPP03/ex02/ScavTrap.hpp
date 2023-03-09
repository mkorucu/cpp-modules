#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &cpy);
    ScavTrap &operator=(const ScavTrap &cpy);
    ScavTrap(std::string name);    
    
    void    attack(std::string const& target);
    void    guardGate();
};

#endif