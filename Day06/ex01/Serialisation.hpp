#ifndef SERIALISATION_HPP
#define SERIALISATION_HPP

#include <stdint.h>

class Serialisation
{

    uintptr_t serialize(Data* ptr);
    
    Serialisation();
    Serialisation(const Serialisation &);
    Serialisation &operator=(const Serialisation &);
    ~Serialisation();
};

#endif