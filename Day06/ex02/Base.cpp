#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void    Base::identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        cout << "A is real type" << endl;
        return ;
    }
    catch(const std::exception &a) {}
    try
    {
        (void)dynamic_cast<B&>(p);
        cout << "B is real type" << endl;
        return ;
    }
    catch (const std::exception &b) {}
    try
    {
        (void)dynamic_cast<C&>(p);
        cout << "C is real type" << endl;
        return ;
    }
    catch (const std::exception &c) {}
}

void    Base::identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        cout << "Real type is A" << endl;
    else if (dynamic_cast<B *>(p))
        cout << "Real type is B" << endl;
    else if (dynamic_cast<C *>(p))
        cout << "Real type is C" << endl;
}

Base    *Base::generate(void)
{
    srand((unsigned) time(0));
    int randomNumber = (rand() % 3);
    switch (randomNumber)
    {
        case 0 :
           return new A();
        case 1 :
            return new B();
        case 2 :
            return new C();
    }
    return NULL;
}

Base::~Base() {}