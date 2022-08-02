#include "Form.hpp"
#include "Bureaucrat.hpp"

void    Bureaucrat::executeForm(Form const &form)
{
    if (getGrade() > form.getExec())
    {
        cout << getName() << " can't execute the form cause grade ";
        throw GradeTooLowException();
    }
    else
        cout << getName() << " executed " << form.getName() << endl;
}

void    Bureaucrat::signForm(Form &form) const
{
    if (form.getSignature() == true)
    {
        cout << getName();
        throw Bureaucrat::AlreadySignedException();
    }
    if (this->getGrade() < form.getSigned())
    {
        form.beSigned();
        cout << getName() << " signed " << form.getName() << endl;
    }
    else if (this->getGrade() > form.getSigned())
    {
        cout << getName() << " couldn’t sign " << form.getName() << " because grade is ";
        throw Bureaucrat::GradeTooLowException();
        cout << endl;
    }
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
