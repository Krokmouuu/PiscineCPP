#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>    
#include <list>

using std::cout;
using std::endl;
using std::exception;
using std::vector;
using std::array;

class NoValueException : public exception
{
    const char *what() const throw()
    {
        return ("Value not find");
    }
};

template < typename T >
typename T::iterator easyfind(T & container, int n)
{
    typename T::iterator finder = find(container.begin(), container.end(), n);
    if (finder == container.end())
        throw NoValueException();
    return finder;
}

#endif