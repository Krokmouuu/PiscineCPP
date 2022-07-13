#include "Fixed.Class.hpp"

const Fixed &Fixed::max(const Fixed& params1, const Fixed& params2)
{
    if ((Fixed)params1 > (Fixed)params2)
        return params1;
    else
        return params2;
}

const Fixed &Fixed::min(const Fixed& params1, const Fixed& params2)
{
    if ((Fixed)params1 < (Fixed)params2)
        return params1;
    else
        return params2;
}

Fixed &Fixed::min(Fixed& params1, Fixed& params2)
{
    if (params1 < params2)
        return params1;
    else
        return params2;
}

Fixed &Fixed::max(Fixed& params1, Fixed& params2)
{
    if (params1 > params2)
        return params1;
    else
        return params2;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++*this;
    return tmp;
}

Fixed   &Fixed::operator++(void)
{
    ++_value;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(_value);
    --_value;
    return tmp;
}

Fixed   &Fixed::operator--(void)
{
    --_value;
    return *this;
}

bool  Fixed::operator>(const Fixed& params)
{
    if (_value > params._value)
        return true;
    else
        return false;
}

bool  Fixed::operator<(const Fixed& params)
{
    if (_value < params._value)
        return true;
    else
        return false;
}

bool Fixed::operator>=(const Fixed& params)
{
    if (_value >= params._value)
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed& params)
{
    if (_value <= params._value)
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed& params)
{
    if (_value == params._value)
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed& params)
{
    if (_value != params._value)
        return true;
    else
        return false;
}

Fixed   Fixed::operator+(const Fixed& params)
{
    return _value += params._value;
}

Fixed   Fixed::operator-(const Fixed& params)
{
    return _value -= params._value;
}

Fixed   Fixed::operator/(const Fixed& params)
{
    Fixed tmp;

	tmp.setRawBits(_value / params._value * (1 << bits));
	return tmp;
}

Fixed   Fixed::operator*(const Fixed& params)
{
    Fixed tmp;

	tmp.setRawBits(_value * params._value / (1 << bits));
	return tmp;
}

Fixed   &Fixed::operator=(const Fixed& params)
{
    _value = params.getRawBits();
    return *this;
}

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

Fixed::Fixed()
{
    setRawBits(0);
}

Fixed::Fixed(const int n)
{
    _value = n << bits;
}

Fixed::Fixed(const float f)
{
    _value = (roundf(f * (1 << bits)));
}

Fixed::Fixed(const Fixed& params)
{
    *this = params;
}

Fixed::~Fixed() {}