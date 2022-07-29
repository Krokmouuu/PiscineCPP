#include "Bureaucrat.hpp"

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

int Bureaucrat::getGrade() const
{
    return _grade;
}

Bureaucrat::Bureaucrat(string name, int grade) : _name(name)
{
    cout << "Bureaucrat constructor called" << endl;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade = grade;
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
