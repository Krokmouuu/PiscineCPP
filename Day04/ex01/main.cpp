#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    unsigned int len = 10;
    Animal* meta = new Animal();
    Animal* i = new Cat();
    Animal* j = new Dog();
    WrongAnimal* iman = new WrongCat();
    WrongCat* taouil = new WrongCat();
    Animal* tab[len];

    delete meta;
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