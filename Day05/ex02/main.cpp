#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat oui("oui", 1);
    Bureaucrat non("non", 26);
    // Bureaucrat non("non", 24); //! Can sign but can't execute
    PresidentialPardonForm form1("target");
    RobotomyRequestForm    form2("target");
    ShrubberyCreationForm  form3("uwu");

    // form1._name = "coucou"; //* Variable are private
    
    try
    {
        oui.signForm(form1);
        // oui.signForm(form1); //* Can't sign 2 times
        // non.signForm(form1); //* Can't sign
        form1.action(oui);
        oui.signForm(form2); 
        // oui.signForm(form2); //* Can't sign 2 times
        // non.signForm(form2); //* Can't sign        
        form2.action(oui);
        oui.signForm(form3);
        // oui.signForm(form1); //* Can't sign 2 times
        // non.signForm(form1); //* Can't sign
        form3.action(oui);
        non.executeForm(form1);

    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}