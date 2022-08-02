#include "Form.hpp"
#include "Bureaucrat.hpp"

bool Form::getSignature() const
{
    return _signed;
}

string Form::getTarget() const
{
    return _target;
}

void Form::beSigned()
{
    _signed = true; 
}

string Form::getName() const
{
    return _name;
}

unsigned int Form::getSigned() const
{
    return _gsigned;
}

unsigned int Form::getExec() const
{
    return _gexec;
}

Form::Form(string const name, string const target, unsigned int gsigned, unsigned int gexec) : _name(name), _target(target), _signed(false), _gsigned(gsigned), _gexec(gexec)
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

void    Form::execute(Bureaucrat const &executor) const
{
    if (this->getSignature() == false)
        throw Form::FormNotSignedException();
    else if (executor.getGrade() > this->getExec())
        throw Form::GradeTooHighException();
}

Form::~Form() {}

ostream &operator<<(ostream &os, const Form &form)
{
	os << form.getName() << " need " << form.getSigned() << " and " << form.getExec() << " for being signed" << endl;
	return (os);
}