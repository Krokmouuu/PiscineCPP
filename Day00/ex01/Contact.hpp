#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        std::string secret;

public:
        void    get_contact(std::string firstn, std::string lastn, std::string nickname, std::string number, std::string secret);
        std::string get_first();
        std::string get_last();
        std::string get_nickname();
        std::string get_number();
        std::string get_secret();
};

#endif