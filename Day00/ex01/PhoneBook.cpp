#include "PhoneBook.hpp"
#include <iostream>
#include "Contact.hpp"

void    PhoneBook::put_all(int j)
{
        std::cout << "Ur Cuty First Name UwU -> " << w[j].get_first() << std::endl;
        std::cout << "Ur Fabulous Last Name OwO -> " << w[j].get_last() << std::endl;
        std::cout << "Ur Perfect Nickname WoW -> " << w[j].get_nickname() << std::endl;
        std::cout << "Ur Shiny Phone Number ^.^ -> " << w[j].get_number() << std::endl;
        std::cout << "Ur Darkest Secret.. :x -> " << w[j].get_secret() << std::endl;
}

void    PhoneBook::put_nickname(int j)
{
    std::string str = w[j].get_nickname();
    size_t len = str.length();

     if (len <= 10)
        std::cout << std::setw(10) << std::right << str;
    else
        std::cout << str.substr(0, 9) << ".";
}
void    PhoneBook::put_number(int j)
{
    std::string str = w[j].get_number();
    size_t len = str.length();

     if (len <= 10)
        std::cout << std::setw(10) << std::right << str;
    else
        std::cout << str.substr(0, 9) << ".";
}
void    PhoneBook::put_secret(int j)
{
    std::string str = w[j].get_secret();
    size_t len = str.length();

     if (len <= 10)
        std::cout << std::setw(10) << std::right << str;
    else
        std::cout << str.substr(0, 9) << ".";
}

void    PhoneBook::put_last(int j)
{
    std::string str = w[j].get_last();
    size_t len = str.length();

     if (len <= 10)
        std::cout << std::setw(10) << std::right << str;
    else
        std::cout << str.substr(0, 9) << ".";
}

void    PhoneBook::put_first(int j)
{
    std::string str = w[j].get_first();
    size_t len = str.length();

     if (len <= 10)
        std::cout << std::setw(10) << std::right << str;
    else
        std::cout << str.substr(0, 9) << ".";
}

void    PhoneBook::search_cmd(void)
{
    std::cout << std::endl;
    if (i == 0)
    {
        std::cout << "No user registered :(" << std::endl << std::endl;
        return ;
    }
    std::cout << "Lists of Users : " << i << std::endl;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for(int j = 0; j < i; j++)
    {
        std::cout << std::setw(10) << std::right << j << "|";
        put_first(j);
        std::cout << "|";
        put_last(j);
        std::cout << "|";
        put_nickname(j);
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::string search;
    std::cout << "Search id of user : ";
    if (getline(std::cin, search).eof())
        exit (0);
    if (search == "\0")
        return ;
    if (search[0] - '0' < i && search != " ")
        put_all(search[0] - '0');
    std::cout << std::endl;
}

void    PhoneBook::add_cmd(void)
{
    Contact next;
    std::string firstn;
    std::string lastn;
    std::string nickname;
    std::string number;
    std::string secret;
    std::cout << std::endl;
    std::cout << "Let's add a new user \\^.^/" << std::endl;
    while (1)
    {
        std::cout << "First Name : ";
        if (getline(std::cin, firstn).eof())
            exit (0);

        std::cout << "Last Name : ";
        if (getline(std::cin, lastn).eof())
            exit (0);
        std::cout << "Nickname : ";
        if (getline(std::cin, nickname).eof())
            exit (0);
        std::cout << "Phone Number : ";
        if (getline(std::cin, number).eof())
            exit (0);
        std::cout << "Darkest Secret : ";
        if (getline(std::cin, secret).eof())
            exit (0);
        break ;
    }
    if (firstn == "\0" || lastn == "\0" || nickname == "\0" || number == "\0" || secret == "\0")
    {
        std::cout << "\nU can't have empty space\n" << std::endl;
        return ;
    }
    if (replace == 1)
    {
        w[save].get_contact(firstn, lastn, nickname, number, secret);
        save = save + 1;
        if (save == 8)
            save = 0;
    }
    else
    {
        w[i].get_contact(firstn, lastn, nickname, number, secret);
        i = i + 1;
        if (i == 8)
            replace = 1;
    }
    std::cout << "Welcome new user \\^.^/" << std::endl << std::endl;
}

void    PhoneBook::start(void)
{
    std::cout << "Welcome \\^.^/" << std::endl;
    i = 0;
    std::cout << "List of Commands Available : ";
    std::cout << "ADD | SEARCH | EXIT" << std::endl;
    while (1)
    {
        std::string cmd;

        if (getline(std::cin, cmd).eof())
            exit (0);
        if (cmd == "EXIT")
            break ;
        else if (cmd == "ADD")
            add_cmd();
        else if (cmd == "SEARCH")
            search_cmd();
        std::cout << "List of Commands Available : ";
        std::cout << "ADD | SEARCH | EXIT" << std::endl;
    }
    std::cout << "Goodbye _T_T/" << std::endl;
}