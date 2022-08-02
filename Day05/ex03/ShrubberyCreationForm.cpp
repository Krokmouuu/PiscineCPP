#include "ShrubberyCreationForm.hpp"

void    ascii_func()
{

}

void    ShrubberyCreationForm::action(const Bureaucrat &executor) const
{
    this->Form::execute(executor);
    string filename = getTarget() += "_shrubbery";
    ofstream output(filename);

    if (output.is_open() == false)
        cerr << "Failed to open " << filename << '\n';
    else
        output << tree;
}

ShrubberyCreationForm::ShrubberyCreationForm(string const target) : Form("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &params) : Form(params) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &params)
{
    this->Form::operator=(params);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}