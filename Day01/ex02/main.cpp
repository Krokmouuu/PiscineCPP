#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    cout << &str << " <--- str | stringPTR --->  " << &stringPTR << " <--- stringPTR | stringREF ---> " << &stringREF << endl;
    cout << str << " <--- str | stringPTR ---> " << *stringPTR << " <--- stringPTR | stringREF ---> " << stringREF << endl;
}