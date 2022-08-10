#include "Iter.hpp"

void ft_putstr(std::string const &str)
{
    cout << str << endl;
}

void ft_putchar(char const &c)
{
    cout << c << endl;
}

void i(int const &ints)
{
    cout << ints << endl;
}

int main()
{
    int tab[5] = {1,2,3,4,5};
    char c[3] = {'a', 'b', 'c'};
    std::string str[4] = {"PLE-BERR", "PUSH", "SON", "PHILO"};
    
    iter(tab, 5, i);
    cout << endl;
    iter(c, 3, ft_putchar);
    cout << endl;
    iter(str, 4, ft_putstr);
    return 0;
}
