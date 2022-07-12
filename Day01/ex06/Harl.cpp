#include "Harl.Class.hpp"

enum complaining {DEBUG,INFO,WARNING,ERROR,NOTHING};

void    Harl::debug()
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do!" << endl << endl;
}

void    Harl::info()
{
    cout << "I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl << endl;
}

void    Harl::warning()
{
    cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month." << endl << endl;
}

void    Harl::error()
{
    cout << "This is unacceptable! I want to speak to the manager now." << endl << endl;
}

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::complain(string level)
{
    int complain = \
            (level == "DEBUG") ? DEBUG :
            (level == "INFO") ? INFO :
            (level == "WARNING") ? WARNING :
            (level == "ERROR") ? ERROR :
            (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") ? NOTHING : NOTHING;

   switch(complain)
   {
        case DEBUG:
        {
            cout << "[ DEBUG ]" << endl;
            debug();
        }
        case INFO:
        {
            cout << "[ INFO ]" << endl;
            info();
        }
        case WARNING:
        {
            cout << "[ WARNING ]" << endl;
            warning();
        }
        case ERROR:
        {
            cout << "[ ERROR ]" << endl;
            error();
            break ;
        }
        case NOTHING:
        {
            cout << "[ Probably complaining about insignificant problems ]" << endl;
            break ;
        }
   }
}