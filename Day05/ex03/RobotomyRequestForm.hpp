#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

using std::srand;
using std::time;

class RobotomyRequestForm : public Form
{
    public :

    void    action(const Bureaucrat &executor) const;

    RobotomyRequestForm(string const target);
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &);
    ~RobotomyRequestForm();
};

#endif