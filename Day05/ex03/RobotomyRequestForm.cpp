#include "RobotomyRequestForm.hpp"

void    RobotomyRequestForm::action(const Bureaucrat &executor) const
{
    this->Form::execute(executor);
    cout << getTarget() << " start making robotic noises..." << endl;
    srand(time(0));
    if (rand() % 2 == 1)
        cout << getTarget() << " has been robotomized successfully" << endl;
   else
        cout << getTarget() << " beep beep b0000oooo...." << endl;
}

RobotomyRequestForm::RobotomyRequestForm(string const target) : Form("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &params) : Form(params) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &params)
{
    this->Form::operator=(params);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}