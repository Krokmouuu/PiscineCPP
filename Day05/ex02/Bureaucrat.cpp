#include "Bureaucrat.hpp"
#include "Form.hpp"

void    Bureaucrat::signForm(string const name, int i) const
{
    if (i == 0)
        cout << getName() << " signed " << name << endl;
    if (i == 1)
    {
        cout << getName() << " couldn’t sign " << name << " because grade is too low." << endl;
        throw Bureaucrat::GradeTooLowException();
    }
    if (i == 2)
        cout << getName() << " can't sign the form, is already signed." << endl;
}

void    Bureaucrat::increasedGrade(int i)
{
    if (_grade - i < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade - i > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade -= i;
}

void    Bureaucrat::decreasedGrade(int i)
{
    if (_grade + i > 150)
        throw Bureaucrat::GradeTooLowException();
    if (_grade + i < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade += i;
}

string Bureaucrat::getName() const
{
    return _name;
}

unsigned int Bureaucrat::getGrade() const
{
    return _grade;
}

Bureaucrat::Bureaucrat(string name, int grade) : _name(name), _grade(grade)
{
    cout << "Bureaucrat constructor called" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &params)
{
    cout << "Copy constructor called" << endl;
    *this = params;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &params)
{
    cout << "Operator called" << endl;
    if (this != &params)
        _grade = params.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {}

ostream &operator<<(ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.getName() << ", grade " << bureaucrat.getGrade();
	return (os);
}
