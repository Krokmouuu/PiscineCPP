#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span sp2 = Span(10000);

    vector<int> test;
    for (size_t i = 0; i < 10000; i++)
        test.push_back(i);
    try
    {
        sp2.addNumber(test.begin(), test.end());
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch (const exception &a)
    {
        cerr << a.what() << endl;
    }
    return (0);
}