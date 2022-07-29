#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public :

        void    makeSound() const;

        Cat();
        Cat(const Cat &);
        Cat &operator=(const Cat &);
        ~Cat();

    private :

        Brain *c;
};

#endif