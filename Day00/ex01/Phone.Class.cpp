#include "PhoneBook.hpp"
#include <iostream>
#include "Contact.hpp"

void    PhoneBook::search_cmd(void)
{
    std::cout << std::endl;
    std::cout << "Lists of Users : " << i << std::endl;
    if (i == 0)
    {
        std::cout << "No user registered :(" << std::endl << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::string search;
    std::cout << "Search id of user : ";
    std::cin >> search;
    if (search[0] - '0' < i)
    {
        std::cout << "Ur cuty First Name UwU -> " << w[search[0] - '0'].first_name << std::endl;
        std::cout << "Ur fabulous Last Name OwO -> " << w[search[0] - '0'].last_name << std::endl;
        std::cout << "Ur Perfect Nickname WoW -> " << w[search[0] - '0'].nickname << std::endl;
        std::cout << "Ur Shiny Phone Number ^.^ -> " << w[search[0] - '0'].number << std::endl;
    }
    std::cout << std::endl;
}

void    PhoneBook::add_cmd(void)
{
    Contact next;
    std::string firstn;
    std::string lastn;
    std::string nickname;
    std::string number;
    std::cout << std::endl;
    std::cout << "Let's add a new user \\^.^/" << std::endl;
    while (1)
    {
        std::cout << "First Name : ";
        if (getline(std::cin, firstn).eof())
            continue ;
        std::cout << "Last Name : ";
        if (getline(std::cin, lastn).eof())
            continue ;
        std::cout << "Nickname : ";
        if (getline(std::cin, nickname).eof())
            continue ;
        std::cout << "Phone Number : ";
        if (getline(std::cin, number).eof())
            continue ;
        break ;
    }
    if (replace == 1)
    {
        w[save].get_contact(firstn, lastn, nickname, number);
        save = save + 1;
        if (save == 8)
            save = 0;
    }
    else
    {
        w[i].get_contact(firstn, lastn, nickname, number);
        i = i + 1;
        if (i == 8)
            replace = 1;
    }
    std::cout << "Welcome new user \\^.^/" << std::endl << std::endl;
}

void    PhoneBook::start(void)
{
    std::cout << "Welcome \\^.^/" << std::endl;
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
        {
            add_cmd();
            std::cout << "List of Commands Available : ";
            std::cout << "ADD | SEARCH | EXIT" << std::endl;
        }
        else if (cmd == "SEARCH")
        {
            search_cmd();
            std::cout << "List of Commands Available : ";
            std::cout << "ADD | SEARCH | EXIT" << std::endl;
        }
    }
    std::cout << "Goodbye _T_T/" << std::endl;
}