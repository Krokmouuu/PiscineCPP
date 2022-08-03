#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat oui("oui", 70);
    Bureaucrat non("non", 26);
    // Bureaucrat non("non", 24); //! Can sign but can't execute
    PresidentialPardonForm form1("target");
    RobotomyRequestForm    form2("target");
    ShrubberyCreationForm  form3("uwu");
    Intern someRandomIntern;
    Form* rrf;

    rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

    // form1._name = "coucou"; //* Variable are private
    
    try
    {
        oui.signForm(*rrf);
        rrf->action(oui);
        oui.executeForm(*rrf);
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}