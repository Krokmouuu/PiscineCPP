#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdbool.h>

using std::string;
using std::endl;
using std::cout;
using std::exception;
using std::ostream;

class Bureaucrat;

class Form
{

    public :

        bool   getSignature() const;
        string getTarget() const;
        void   beSigned();
        string getName() const;
        unsigned int    getSigned() const;
        unsigned int    getExec() const;

	    void  execute(Bureaucrat const &executor) const;

        virtual void action(const Bureaucrat &executor) const = 0;
    
        Form(string const name, string const _target, unsigned int gsigned, unsigned int gexec);
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

        class FormNotSignedException : public exception
        {
            virtual const char *what() const throw()
            {
                return ("Form is not signed");
            }
        };

    private :

        string const _name;
        string const _target;
        bool    _signed;
        unsigned int  _gsigned;
        unsigned int  _gexec;
};

ostream &operator<<(ostream &, const Form &);

#endif