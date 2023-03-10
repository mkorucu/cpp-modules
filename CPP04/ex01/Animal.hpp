#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string input);
	Animal(const Animal &cpy);
	Animal &operator=(const Animal &cpy);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
};

#endif