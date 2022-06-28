#include <iostream>
#include <fstream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

string checkstr(string const MyText, string const s1, string const s2)
{
    string NewText;
    std::string::size_type before_found = 0;
    std::string::size_type found = MyText.find(s1);
    while (found != string::npos)
    {
        NewText += MyText.substr(before_found, found - before_found);
        NewText += s2;
        before_found = found + s1.length();
        found = MyText.find(s1, before_found);
    }
    NewText += MyText.substr(before_found);
    NewText += "\n";
    return NewText;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        string coucouw = argv[1];
        ifstream file(argv[1]);
        string s1 = argv[2];
        string s2 = argv[3];
        string MyText;

        if (!file.is_open())
        {
            cout << "Error File" << endl;
            return 0;
        }
        if (!getline(file, MyText))
        {
            cout << "File is empty" << endl;
            return 0;
        }
        file.close();
        file.open(argv[1]);
        string filename = argv[1]; filename += ".replace";
        ofstream output(filename);
        while (getline(file, MyText))
        {
            MyText = checkstr(MyText, s1, s2);
            output << MyText;
        }
    }
    else cout << "Three inputs needed" << endl;
}