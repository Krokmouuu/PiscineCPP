#include "Contact.hpp"
#include "PhoneBook.hpp"


void    Contact::get_contact(std::string firstn, std::string lastn, std::string nickname, std::string number)
{
    this->first_name = firstn;
    this->last_name = lastn;
    this->nickname = nickname;
    this->number = number;
}