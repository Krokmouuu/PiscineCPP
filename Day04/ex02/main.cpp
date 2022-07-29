#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    unsigned int len = 10;
    // const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* iman = new WrongCat();
    const WrongCat* taouil = new WrongCat();
    Animal* tab[len];

    // delete meta;
    delete i;
    delete j;
    delete iman;
    delete taouil;

    cout << endl;

    for(unsigned int y = 0; y < len / 2; y++)
        tab[y] = new Dog();
    for(unsigned int y = len / 2; y < len; y++)
        tab[y] = new Cat();
    for(unsigned int y = 0; y < len; y++)
        delete tab[y];
    return 0;
}