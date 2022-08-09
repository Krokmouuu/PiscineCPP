#include "Span.hpp"

void Span::addNumber(vector<int>::iterator const &begin, vector<int>::iterator const &end)
{
    int size = distance(begin, end);
    if (size > (int)_size)
        throw ArrayFullException();
    _array.insert(_array.end(), begin, end);
}

long long Span::shortestSpan()
{
    if (distance(_array.begin(), _array.end()) == 0 || distance(_array.begin(), _array.end()) == 1)
        throw DistanceTooSmallException();
    vector<int> copyarray = this->_array;
    if (copyarray.empty())
        throw DistanceTooSmallException();

    sort(copyarray.begin(), copyarray.end());
    vector<int>::iterator start = copyarray.begin();
    vector<int>::iterator next = ++copyarray.begin();
    long long minvalue = INT_MAX;

    while (next != copyarray.end())
    {
        if (*next - *start < minvalue)
            minvalue = *next - *start;
        start = next;
        next++;
    }
    return minvalue;
}

long long Span::longestSpan()
{
     if (distance(_array.begin(), _array.end()) == 0 || distance(_array.begin(), _array.end()) == 1)
        throw DistanceTooSmallException();
    vector<int> copyarray = this->_array;
    if (copyarray.empty())
        throw DistanceTooSmallException();

    sort(copyarray.begin(), copyarray.end());
    vector<int>::iterator next = copyarray.begin();
    long long maxvalue = INT_MIN;
    long long minvalue = INT_MAX;

    while (next != copyarray.end())
    {
        if (*next < minvalue)
            minvalue = *next;
        if (*next > maxvalue)
            maxvalue = *next;
        *next++;
    }
    return maxvalue - minvalue;
}

void Span::addNumber(unsigned int n)
{   
    if (this->_array.size() >= this->_size)
        throw ArrayFullException();
    this->_array.push_back(n);
}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span &params)
{
    _size = params._size;
}

Span &Span::operator=(const Span &params)
{
    this->_size = params._size;
    this->_array = params._array;
    return *this;
}

Span::~Span() {}