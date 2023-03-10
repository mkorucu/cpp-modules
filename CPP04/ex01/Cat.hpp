#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *set;
public:
    Cat();
    ~Cat();
    void    makeSound()const;
};
#endif