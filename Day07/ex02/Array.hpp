#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::exception;
using std::string;
using std::to_string;

template < typename T >
class Array
{
    public :

    unsigned int getSize() const
    {
        return _size;
    }

    Array()
    {
       _size = 0;
       _a = new T[0]; 
    }

    Array(unsigned int n)
    {
        _size = n;
        _a = new T[_size];
    }

    Array(const Array &params)
    {
        this->_size = params._size;
        this->_a = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            this->_a[i] = params[i];
    }

    Array<T> &operator=(const Array &params)
    {
        this->_size = params._size;
        this->_a = new T[params._size];
        for (unsigned int i = 0; i < params._size; i++)
           this->_a[i] = params[i];
        return *this;
    }

    T operator[](int i) const
    {
        if (i < 0)
            throw ImpossibleException();
        else if (i >= static_cast<int>(this->getSize()))
            throw ImpossibleException();
        return this->_a[i];
    }

    T &operator[](int i)
    {
        if (i < 0)
            throw ImpossibleException();
        else if (i >= static_cast<int>(this->getSize()))
            throw ImpossibleException();
        return this->_a[i];
    }

    ~Array()
    {
        delete [] _a;
    }

    class ImpossibleException : public exception
    {
        const char *what() const throw()
        {
            return ("Index impossible");
        }
    };

    private :

        unsigned int _size;
        T *_a;
};

#endif