#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdbool.h>
#include "Bureaucrat.hpp"

using std::string;
using std::endl;
using std::cout;
using std::exception;
using std::ostream;

class Form
{

    public :

        void   beSigned(const Bureaucrat &);
        string getName() const;
        int    getSigned() const;
        int    getExec() const;

        Form(string const name, unsigned int gsigned, unsigned int gexec);
        Form(const Form &);
        virtual ~Form();
        Form    &operator=(const Form &);

        class GradeTooHighException : public exception
        {
            virtual const char *what() const throw()
            {
                return ("Form Grade required too high");
            }
        };
        
        class GradeTooLowException : public exception 
        {
            virtual const char *what() const throw()
            {
                return ("Form Grade required too low");
            }
        };

    private :

        string const _name;
        bool    _signed;
        unsigned int  _gsigned;
        unsigned int  _gexec;
};

ostream &operator<<(ostream &, const Form &);

#endif