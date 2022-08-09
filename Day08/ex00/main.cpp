#include "easyfind.hpp"

int main(void)
{
    vector<int> array;
    for (int i = 0; i < 10; i++)
        array.push_back(i);
    try
    {
        cout << *easyfind(array, 8) << " Found in Array" << endl;
        cout << *easyfind(array, 11) << " Found in Array" << endl;

    }
    catch (const exception &e)
    {
        std::cerr << e.what() << endl;
    }
    return 0;
}