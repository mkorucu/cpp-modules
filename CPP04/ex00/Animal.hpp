#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
	virtual void makeSound();

};

#endif ANIMAL_HPP