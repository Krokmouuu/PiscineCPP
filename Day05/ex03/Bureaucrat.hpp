#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

using std::string;
using std::cout;
using std::endl;
using std::exception;
using std::cerr;
using std::ostream;

class Form;

class Bureaucrat
{
    public :

        void  executeForm(Form const &form);
        void  signForm(Form &form) const;
        string getName() const;
        unsigned int getGrade() const;
        void increasedGrade(int i);
        void decreasedGrade(int i);

        Bureaucrat(string name, int grade);
        Bureaucrat(const Bureaucrat &);
        ~Bureaucrat();
        Bureaucrat  &operator=(const Bureaucrat &);

        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw()
            {
                return ("too low");
            }
        };

        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw()
            {
                return ("too high");
            }
        };

        class AlreadySignedException : public exception
        {
            virtual const char *what() const throw()
            {
                return (" can't sign the form, is already signed.");
            }
        };
    private :

        string const _name;
        unsigned int    _grade;
};

ostream& operator<<(ostream &, const Bureaucrat &);

#endif