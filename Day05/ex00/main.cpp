#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat g("cc", 5);

    try
    {
        g.increasedGrade(1);
        cout << g << endl;
        g.decreasedGrade(10);
        cout << g << endl;
    }
    catch (const exception &e)
    {
        std::cerr << e.what() << endl;
    }
    try
    {
        g.increasedGrade(13);
        cout << g << endl;
        g.increasedGrade(1);
        cout << g << endl;
    }
    catch (const exception &e)
    {
        std::cerr << e.what() << endl;
    }
    return 0;
}