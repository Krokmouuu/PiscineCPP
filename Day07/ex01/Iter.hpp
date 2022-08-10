#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

using std::ostream;
using std::cout;
using std::endl;
using std::string;

template <typename T>
void iter(T const *lst, size_t len, void (*f)(T const &))
{
    for (size_t i = 0; i < len; i++)
        f(lst[i]);
}

#endif 