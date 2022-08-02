#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

enum form {P,R,S,OTHER};

Form    *Intern::makeForm(string const name, string const target)
{
    int form = \
            (name == "PresidentialPardonForm") ? P :
            (name == "RobotomyRequestForm") ? R :
            (name == "ShrubberyCreationForm") ? S : OTHER;

    switch(form)
    {
        case P:
        {
            cout << "Intern creates PresidentialPardonForm" << endl;
            return new PresidentialPardonForm(target);
        }
        case R:
        {
            cout << "Intern creates RobotomyRequestForm" << endl;
            return new RobotomyRequestForm(target);
        }
        case S:
        {
            cout << "Intern creates ShrubberyCreationForm" << endl;
            return new ShrubberyCreationForm(target);
        }
        case OTHER:
            throw ErrorFormException();
    }
    throw ErrorFormException();
}

Intern::Intern() {}

Intern::Intern(const Intern &params)
{
    *this = params;
}

Intern  &Intern::operator=(const Intern &params)
{
    static_cast<void>(params);
    return *this;
}

Intern::~Intern() {}