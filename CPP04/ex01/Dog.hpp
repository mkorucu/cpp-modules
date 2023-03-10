#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain* set;
    
public:
    Dog();
    ~Dog();

    void    makeSound(void) const;
};
#endif