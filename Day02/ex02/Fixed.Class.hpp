#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <string.h>
#include <iostream>
#include <cmath>
#include <stdbool.h>

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
        bool operator>(const Fixed& params);
        bool operator<(const Fixed& params);
        bool operator>=(const Fixed& params);
        bool operator<=(const Fixed& params);
        bool operator==(const Fixed& params);
        bool operator!=(const Fixed& params);
        Fixed operator+(const Fixed& params);
        Fixed operator-(const Fixed& params);
        Fixed operator/(const Fixed& params);
        Fixed operator*( const Fixed& params);
        Fixed operator++(int);
        Fixed &operator++(void);
        Fixed operator--(int);
        Fixed &operator--(void);
const   Fixed& min(const Fixed& params1, const Fixed& params2);
const   Fixed& max(const Fixed& params1, const Fixed& params2);
        Fixed& min(Fixed& params1, Fixed& params2);
        Fixed& max(Fixed& params1, Fixed& params2);
        
    private :

        static const int bits = 8;
        int _value;

};
    std::ostream& operator<<(std::ostream &os, const Fixed& params);

#endif