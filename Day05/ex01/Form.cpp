#include "Bureaucrat.hpp"
#include "Form.hpp"

void Form::beSigned(const Bureaucrat &bc)
{
    if (_gsigned > 150 || _gexec > 150)
        throw Form::GradeTooLowException();
    if (_gexec < 1 || _gexec < 1)
        throw Form::GradeTooHighException();
    if (_signed == false)
    {
        if (bc.getGrade() > _gsigned || bc.getGrade() > _gexec)
            bc.signForm(getName(), 1);
        if (bc.getGrade() <= _gsigned && bc.getGrade() <= _gexec)
        {
            _signed = true;
            bc.signForm(getName(), 0);
        }
    }
    else
        bc.signForm(getName(), 2);
     
}

string Form::getName() const
{
    return _name;
}

int Form::getSigned() const
{
    return _gsigned;
}

int Form::getExec() const
{
    return _gexec;
}

Form::Form(string const name, unsigned int gsigned, unsigned int gexec) : _name(name), _signed(false), _gsigned(gsigned), _gexec(gexec)
{
    cout << "Form constructor called" << endl;
}

Form::Form(const Form &params)
{
    *this = params;
}

Form    &Form::operator=(const Form &params)
{
    if (this != &params)
    {
        this->_signed = params._signed;
        this->_gsigned = params.getSigned();
        this->_gexec = params.getExec();
    }
    return *this;
}

Form::~Form() {}

ostream &operator<<(ostream &os, const Form &form)
{
	os << form.getName() << " need " << form.getSigned() << " and " << form.getExec() << " for being signed" << endl;
	return (os);
}