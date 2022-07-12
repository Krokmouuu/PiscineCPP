#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

class   Fixed{

    public :

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    Fixed();
    Fixed(const Fixed&);
    ~Fixed();
    Fixed &operator=(const Fixed& params);
    
    private :

        static const int bits = 8;
        int _value;

};

#endif