#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(std::string isim);
	~Zombie();
	void	announce(void);
};

#endif