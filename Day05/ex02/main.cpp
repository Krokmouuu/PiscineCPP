#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat g("Cat", 31);
    Form       f1("form1", 50, 50);
    Form       f2("form2", 2, 2);

    try
    {
        f1.beSigned(g);
        f2.beSigned(g);
    }
    catch (const exception &c)
    {
        std::cerr << c.what() << endl;
    }
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