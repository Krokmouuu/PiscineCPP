#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <iterator>    
#include <list>
#include <math.h>

using std::endl;
using std::cout;
using std::vector;
using std::exception;

template <typename T>
class MutantStack : public std::stack<T>
{
    public :

        MutantStack() {};
        MutantStack(const MutantStack &params)
        {
             *this = params;
        };
        ~MutantStack() {};

        MutantStack<T> &operator=(const MutantStack &params)
        {
            this = params;
            return *this;
        };

        typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
};

#endif