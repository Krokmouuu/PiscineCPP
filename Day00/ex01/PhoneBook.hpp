#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <cstring>
#include <string>

class PhoneBook
{
    public:
        Contact w[8];
        int     i;
        int     save;
        int     replace;
        void    add_cmd();
        void    search_cmd();
        void    start();
        void    put_first(int j);
        void    put_last(int j);
        void    put_nickname(int j);
        void    put_number(int j);
        void    put_secret(int j);
        void    put_all(int j);
};


#endif