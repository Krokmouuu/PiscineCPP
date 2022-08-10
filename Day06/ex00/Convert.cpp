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
        int num = static_cast<int>(stoi(value));
        if (num < INT_MIN || num > INT_MAX)
            throw Convert::NotPrintableException();
        else
            cout << static_cast<int>(num) << endl;
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
        if ((value[0] >= 'a' && value[0] <= 'z') || (value[0] >= 'A' && value[0] <= 'Z'))
        {
            cout << value[0] << endl;
            return ;
        }
        int c = stoi(value);
        if (c <= 126 && c >= 32)
            cout << static_cast<char>(c) << endl;
        else
            throw Convert::NotPrintableException();
    }
    catch(const std::exception& e)
    {
        throw Convert::NotConvertableException();
    }
 
}

void Convert::toFloat(string value)
{
    cout << "float : ";
    try
    {
        size_t i = value.size();
        int k = 0;
        for (size_t oui = 0; oui < value.size(); oui++)
            if (value[oui] == '.')
                k = 1;
        float dou = static_cast<float>(stof(value));
        if (value[i - 1] == '0')
            cout << dou << ".0f" << endl;
        else if (value[i - 1] == 'f')
            cout << dou << "f" << endl;
        else if (value[i - 1] == 'n')
            cout << dou << "f" << endl;
        else if (value[i] == 'n')
            cout << dou << "f" << endl;
        else if (value[i - 1] >= '0' && value[i - 1] <= '9' && k == 1)
            cout << dou << "f" << endl;
        else if (value[i - 1] == '.')
            cout << dou << ".0f" << endl;
        else if (value[i - 1] != '.' && k == 0)
            cout << dou << ".0f" << endl;
        else
            cout << dou << "f" << endl;
    }
    catch (const exception &f)
    {
        throw Convert::NotConvertableException();
    }
}

void Convert::toDouble(string value)
{
    cout << "double : ";
    try
    {
        double dou = static_cast<double>(stod(value));
        size_t i = value.size();
        int k = 0;
        for (size_t b = 0; b < value.size(); b++)
            if (value[b] == '.')
                k = 1;
        if (value[i - 1] == '0')
            cout << dou << ".0" << endl;
        else if (value[i] >= '0' && value[i] <= '9' && k == 1)
            cout << dou << endl;
        else if (value[i - 1] == '.')
            cout << dou << ".0" << endl;
        else if (value[i - 1] == 'n')
            cout << dou << endl;
        else if (k == 0 && value[i - 1] != 'f')
            cout << dou << ".0" << endl;
        else
            cout << dou << endl;
    }
    catch (const exception &d)
    {
        throw Convert::NotConvertableException();
    }
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