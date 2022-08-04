#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;

template< typename T >
void    iter(T *tab, size_t const len, void (*f)(T &))
{
    for (size_t i = 0; i < len; i++)
        f(tab[i]);
    return ;
}

#endif