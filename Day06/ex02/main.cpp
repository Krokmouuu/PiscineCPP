#include "Base.hpp"

int main()
{
    Base    *cc = NULL;

    cc = cc->generate();
    cc->identify(cc);
    cc->identify(*cc);
    return 0;
}