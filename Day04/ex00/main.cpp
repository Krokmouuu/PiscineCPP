#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* iman = new WrongCat();
    const WrongCat* taouil = new WrongCat();

    cout << endl;

    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << iman->getType() << " " << std::endl << endl;

    meta->makeSound();
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    iman->makeSound();
    taouil->makeSound();

    cout << endl;

    delete meta;
    delete i;
    delete j;
    delete iman;
    delete taouil;
    return 0;
}