/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/17 15:05:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.PhoneBook.h"
#include "Class.Contact.h"

//Constructeur par defaut
PhoneBook::PhoneBook(void)  {

    // std::cout << "|Object Constructor \tPHONEBOOK\n";
    // std::cout << "|--------------------------------\n";
    this->add = "ADD";
    this->search = "SEARCH";
    this->exitCmd = "EXIT";

    return ;
}

PhoneBook::~PhoneBook(void) {
    // std::cout << "Object Destructor \tPHONEBOOK\n";
    // std::cout << "|--------------------------------\n";
    return ;
}

void    PhoneBook::verifyEntry(void) {

    int i = 0;

    while (1)
    {
        std::cout << "\n+ ------------- + --- + ------ + ---- +\n";
        std::cout << "|ENTER COMMAND:  [ADD] [SEARCH] [EXIT]|\n";
        std::cout << "+ ------------- + --- + ------ + ---- +\n\n";

        std::getline(std::cin, this->cmd);
        if (std::cin.eof())
            return ;
        if (this->cmd.compare(this->add) == 0)
        {
            if (i == 8)
                i = 0;
            PhoneBook::contact[i].addContact(i + 1);
            i++;
        }
        else if (this->cmd.compare(this->search) == 0)
        {
            PhoneBook::listContact();
            PhoneBook::selectContact();
        }
        else if (this->cmd.compare(this->exitCmd) == 0)
           return  ;
        else
        {
           std::cout << "+ ----------- +\n";
           std::cout << "|WRONG INPUT. |\n";
           std::cout << "+ ----------- +\n";
        }
    }
}

void    PhoneBook::listContact(void)    {

    int i = 0;

    PhoneBook::headerContact();
    //getter
    while (i != 8)
    {
        PhoneBook::contact[i].printContact
            (contact[i].getFirstName(), contact[i].getLastName(), contact[i].getNickname());
        i++;
    }
    std::cout << "\n+ -------- +";//index
    std::cout << " --------- +";//firstName
    std::cout << " --------- +";//lastName
    std::cout << " --------- +";//nickname
    return ;
}

void    PhoneBook::headerContact(void)  {

    std::string tIndex = "INDEX";
    std::string tFirst = "FIRST NAME";
    std::string tLast = " LAST NAME";
    std::string tNick = "  NICKNAME";

    std::cout << "\n+ -------- +";//index
    std::cout << " --------- +";//firstName
    std::cout << " --------- +";//lastName
    std::cout << " --------- +\n|";//nickname

    std::cout.width(9); std::cout << std::right << tIndex << " |";
    std::cout.width(9); std::cout << std::right << tFirst << " |";
    std::cout.width(9); std::cout << std::right << tLast << " |";
    std::cout.width(9); std::cout << std::right << tNick << " |";
    return ;
}

void    PhoneBook::selectContact(void)    {

    std::string keyWord;
    int i;

    std::cout << "\n|Enter Contact Member: " << "\n\n";
    std::getline(std::cin, keyWord);
    if (std::cin.eof())
        return ;
    while (1)
    {
        if (keyWord.find_first_not_of("12345678") != 0 && keyWord.size() == 1)
        {
            i = std::stoi(keyWord, nullptr, 10) - 1;
            PhoneBook::contact[i].infoContact();
            return ;
        }
        else
        {
            std::cout << "Wrong input." << "\n\n";
            return ;
        }
    }
}

