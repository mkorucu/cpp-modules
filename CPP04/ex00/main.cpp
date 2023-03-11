#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

int main( void )
{
    std::cout << "--------------- Animal ---------------" << std::endl;

    const Animal* meta = new Animal();
    const Animal* karabas = new Dog();
    const Animal* tekir = new Cat();

    std::cout << "karabas Type: " << karabas->getType() << " " << std::endl;
    std::cout << "tekir Type: " << tekir->getType() << " " << std::endl;
    tekir->makeSound();
    karabas->makeSound();
    meta->makeSound();

    delete  meta;
    delete  karabas;
    delete  tekir;

    std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "WrongAnimal Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    delete  wrongCat;

    return 0;
}