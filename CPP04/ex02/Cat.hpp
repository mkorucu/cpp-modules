#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *catbrain;
public:
    Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&);
    ~Cat();
    void    makeSound()const;
};
#endif