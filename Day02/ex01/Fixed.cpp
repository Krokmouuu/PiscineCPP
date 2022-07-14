#include "Fixed.hpp"

int     Fixed::toInt(void) const
{
    int n;

    n = _value >> bits;
    return n;
}

float     Fixed::toFloat(void) const
{
    float f;

    f = (float)_value / (1 << bits);
    return f;
}

std::ostream   &operator<<(std::ostream &os, const Fixed& params)
{
    os << params.toFloat();
    return os;
}

void    Fixed::setRawBits(int const n)
{
    _value = n;
}

int     Fixed::getRawBits(void) const
{
    return _value;
}

Fixed   &Fixed::operator=(const Fixed& params)
{
    cout << "Copy assignment operator called" << endl;
    _value = params.getRawBits();
    return *this;
}

Fixed::Fixed()
{
    cout << "Default constructor called" << endl;
    setRawBits(0);
}

Fixed::Fixed(const int n)
{
    cout << "Int constructor called" << endl;
    _value = n << bits;
}

Fixed::Fixed(const float f)
{
    cout << "Float constructor called" << endl;
    _value = (roundf(f * (1 << bits)));
}

Fixed::Fixed(const Fixed& params)
{
    cout << "Copy constructor called" << endl;
    *this = params;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}