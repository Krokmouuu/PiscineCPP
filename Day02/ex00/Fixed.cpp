#include "Fixed.hpp"

void    Fixed::setRawBits(int const raw)
{
    _value = raw;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << endl;
    return _value;
}

Fixed::Fixed(const Fixed& params)
{
    cout << "Copy constructor called" << endl;
    *this = params;
}

Fixed &Fixed::operator=(const Fixed &params)
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