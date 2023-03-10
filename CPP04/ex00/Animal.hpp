#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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
	virtual void makeSound();
	std::string getType();

};

#endif