#include "Contact.hpp"
#include "PhoneBook.hpp"


std::string Contact::get_first()
{
    return (this->first_name);
}
std::string Contact::get_last()
{
    return (this->last_name);
}
std::string Contact::get_nickname()
{
    return (this->nickname);
}
std::string Contact::get_number()
{
    return (this->number);
}
std::string Contact::get_secret()
{
    return (this->secret);
}

void    Contact::get_contact(std::string firstn, std::string lastn, std::string nickname, std::string number, std::string secret)
{
    this->first_name = firstn;
    this->last_name = lastn;
    this->nickname = nickname;
    this->number = number;
    this->secret = secret;
}