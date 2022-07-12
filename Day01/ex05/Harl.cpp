#include "Harl.Class.hpp"

enum complaining {DEBUG,INFO,WARNING,ERROR,NOTHING};

void    Harl::debug()
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void    Harl::info()
{
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void    Harl::warning()
{
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void    Harl::error()
{
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
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
            debug(); break;
        case INFO:
            info(); break;
        case WARNING:
            warning(); break;
        case ERROR:
            error(); break;
        case NOTHING:
            cout << "Harl is fine" << endl; break;
   }
}