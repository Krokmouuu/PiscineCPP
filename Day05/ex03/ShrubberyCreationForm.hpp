#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

using   std::ofstream;
using   std::fstream;
using   std::cerr;

class ShrubberyCreationForm : public Form
{
    public :

        void    action(const Bureaucrat &executor) const;

        ShrubberyCreationForm(string const target);
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
        ~ShrubberyCreationForm();


};

#define tree "\
       _-_\n\
    /~~   ~~\\\n\
 /~~         ~~\\\n\
{               }\n\
 |  _-     -_  |\n\
   ~   | |  ~\n\
_- -   | | _- _\n\
  _ -  | |   -_\n\
      // \\\n "

#endif