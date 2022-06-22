#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact

{
public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        void    get_contact(std::string firstn, std::string lastn, std::string nickname, std::string number);
};

#endif