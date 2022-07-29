#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::exception;
using std::cerr;
using std::ostream;

class Bureaucrat
{
    public :

        string getName() const;
        int getGrade() const;
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
                return ("Too low");
            }
        };

        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw()
            {
                return ("Too high");
            }
        };
    private :

        string const _name;
        int    _grade;
};

ostream& operator<<(ostream &, const Bureaucrat &);

#endif