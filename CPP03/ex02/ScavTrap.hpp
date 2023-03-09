#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
private:
    ScavTrap();

public:
    ~ScavTrap();
    ScavTrap(std::string name);
    //ScavTrap(const ScavTrap &cpy); 
    
    //ScavTrap &operator=(const ScavTrap &cpy);
    void    attack(std::string const& target);
    void    guardGate();
};

#endif