#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
    public :

    void makeSound() const;
    string getType() const;
    void   setType(string type);

    WrongAnimal();
    WrongAnimal(string type);
    WrongAnimal(const WrongAnimal &);
    virtual ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &);

    protected :

        string  _type;

};


#endif