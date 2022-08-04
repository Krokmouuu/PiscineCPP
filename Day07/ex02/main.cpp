#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 750;
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        else if (mirror[i] == numbers[i])
            std::cout << "they have the same value!!" << std::endl;
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    Array<string>  coucou(5);

    for (unsigned int i = 0; i < 5; i++)
        coucou[i] = "coucou";
    for (unsigned int i = 0; i < 5; i++)
        cout << coucou[i] << i << endl;

    try
    {
        coucou[42] = "non";
    }
    catch(const std::exception& n)
    {
        std::cerr << n.what() << '\n';
    }
    try
    {
        coucou[-42] = "negatif";
    }
    catch(const std::exception& no)
    {
        std::cerr << no.what() << '\n';
    }

    delete [] mirror;
    return 0;
}