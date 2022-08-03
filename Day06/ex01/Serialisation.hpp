#ifndef SERIALISATION_HPP
#define SERIALISATION_HPP

#include <stdint.h>
#include <iostream>

using std::endl;
using std::cout;
using std::uintptr_t;

typedef struct
{
    std::string  hello;
    double       world;
}
Data;

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

#endif