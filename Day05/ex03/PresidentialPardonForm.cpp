#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string const target) : Form("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &params) : Form(params) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &params)
{
    this->Form::operator=(params);
    return *this;
}

void PresidentialPardonForm::action(const Bureaucrat &executor) const
{
    this->Form::execute(executor);
    cout << "The " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}