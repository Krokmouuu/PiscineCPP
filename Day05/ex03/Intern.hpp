#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

class Form;

using std::string;
using std::endl;
using std::cout;

class Intern
{
    public :

    Form *makeForm(string const name, string const target);

    Intern();
    Intern(const Intern &);
    ~Intern();
    Intern &operator=(const Intern &);

    class ErrorFormException : public std::exception
    {
        const char *what() const throw()
        {
            return ("Intern can't create this Form");
        }
    };
};

#endif