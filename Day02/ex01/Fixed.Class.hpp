#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <string.h>
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class   Fixed{

    public :

        int     getRawBits(void) const;
        void    setRawBits(int const n);
        float   toFloat(void) const;
        int     toInt(void) const;

        Fixed();
        Fixed(const int n);
        Fixed(const float f);
        Fixed(const Fixed&);
        ~Fixed();
        Fixed &operator=(const Fixed& params);
    
    private :

        static const int bits = 8;
        int _value;

};
    std::ostream& operator<<(std::ostream &os, const Fixed& params);

#endif