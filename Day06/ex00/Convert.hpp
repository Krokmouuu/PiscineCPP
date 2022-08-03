#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstring>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using std::exception;
using std::cout;
using std::endl;
using std::string;

class Convert
{
    public :

        void printall(string value, Convert &uwu);

        Convert();
        Convert(const Convert &);
        Convert  &operator=(const Convert &);
        ~Convert();

        void    toInt(string value);
        void    toChar(string value);
        void    toFloat(string value);
        void    toDouble(string value);

        class NotPrintableException : public exception
        {
            virtual const char *what() const throw()
            {
                return ("Not printable");
            }
        };

        class NotConvertableException : public exception
        {
            virtual const char *what() const throw()
            {
                return ("Conversion impossible");
            }
        };
};

#endif