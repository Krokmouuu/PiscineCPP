#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Harl{

    public :

            void complain(std::string level);


            Harl();
            ~Harl();
    private :

        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif