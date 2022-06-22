#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <cstring>

class PhoneBook {

public:

    Contact w[8];
    int     i;
    int     save;
    int     replace;
    void    add_cmd();
    void    search_cmd();
    void    start();
};


#endif