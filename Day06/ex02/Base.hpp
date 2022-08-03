#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::time;

class Base
{
    public :

    Base *generate(void);
    void identify(Base* p);
    void identify(Base& p);

    virtual ~Base();
};

#endif