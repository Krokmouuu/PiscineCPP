#include "Convert.hpp"

void    Convert::printall(string value, Convert &uwu)
{
    try
    {
        uwu.toInt(value);
    }
    catch (const exception &i)
    {
        cout << i.what() << endl;
    }
    try
    {
        uwu.toChar(value);
    }
    catch (const exception &c)
    {
        cout << c.what() << endl;
    }
    try
    {
        uwu.toFloat(value);
    }
    catch(const std::exception &f)
    {
        cout << f.what() << endl;
    }
    try
    {
        uwu.toDouble(value);
    }
    catch(const std::exception &d)
    {
        cout << d.what() << endl;
    }
    return ;
}

void    Convert::toInt(string value)
{
    cout << "int : ";
    try
    {
        int num = stoi(value);
        if (num < INT_MIN || num > INT_MAX)
            throw Convert::NotPrintableException();
        else
            cout << num << endl;
    }
    catch (const exception &s)
    {
        if (value.size() == 1)
        {
            cout << static_cast<int>(value[0]) << endl;
            return ;
        }
        throw Convert::NotConvertableException();
    }
}

void    Convert::toChar(string value)
{
    cout << "char : ";
    try
    {
        int c = stoi(value);
        if (c <= 126 && c >= 32)
            cout << static_cast<char>(c) << endl;
        else
            throw Convert::NotPrintableException(); 
    }
    catch(const std::exception& e)
    {
        if (value.size() == 1)
        {
            cout << value[0] << endl;
            return ;
        }
        throw Convert::NotConvertableException();
    }
 
}

void Convert::toFloat(string value)
{
        size_t i = value.size();
        int k = 0;
        for (size_t oui = 0; oui < value.size(); oui++)
            if (value[oui] == '.')
                k = 1;
        float dou = std::stof(value);
        cout << "float : ";
        if (value[i - 1] == '0')
            cout << dou << ".0f" << endl;
        else if (value[i - 1] == 'n')
            cout << dou << "f" << endl;
        else if (value[i - 1] >= '0' && value[i - 1] <= '9' && k == 1)
            cout << dou << "f" << endl;
        else if (value[i - 1] == '.')
            cout << dou << ".0f" << endl;
        else if (value[i - 1] != '.' && k == 0)
            cout << dou << ".0f" << endl;
        else
            cout << dou << endl;
}

void Convert::toDouble(string value)
{
    double dou = std::stod(value);
    size_t i = value.size();
    int k = 0;
    for (size_t b = 0; b < value.size(); b++)
        if (value[b] == '.')
            k = 1;
    cout << "double : ";
    if (value[i - 1] == '0')
        cout << dou << ".0" << endl;
    else if (value[i] >= '0' && value[i] <= '9' && k == 1)
        cout << dou << endl;
    else if (value[i - 1] == '.')
        cout << dou << ".0" << endl;
    else if (value[i] != '.' && k == 0)
         cout << dou << ".0" << endl;
    else
        cout << dou << endl;
}

Convert::Convert() {}

Convert::Convert(const Convert &params)
{
    if (this != &params)
        *this = params;
}

Convert &Convert::operator=(const Convert &params)
{
    static_cast<void>(params);
    return *this;
}

Convert::~Convert() {}