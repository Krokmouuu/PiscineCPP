#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>    
#include <list>
#include <math.h>

using std::cout;
using std::endl;
using std::vector;
using std::exception;
using std::cerr;
using std::distance;

class Span
{
    public :

void           addNumber(unsigned int n);
long long      shortestSpan();
long long      longestSpan();
void           addNumber(vector<int>::iterator const &begin, vector<int>::iterator const &end);

        Span(unsigned int n);
        Span(const Span &);
        Span &operator=(const Span &);
        ~Span();

    private :

        vector<int> _array;
        unsigned int _size;

    class ArrayFullException : public exception
    {
        const char *what() const throw()
        {
            return ("Can't add, array is full.");
        }
    };
    
    class DistanceTooSmallException : public exception
    {
        const char *what() const throw()
        {
            return ("Distance is equal or less than 1");
        }
    };
};



#endif