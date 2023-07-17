/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/17 15:09:20 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Contact.h"

Contact::Contact(void)  {

    std::string clear = "CLEAR";
    // std::cout << "|Object Constructor \tCONTACT\n";
    this->index = 0;
    this->firstName = clear;
    this->lastName = clear;
    this->nickname = clear;
    this->phoneNumber = clear;
    this->darkestSecret = clear;
}

Contact::~Contact(void) {
 //   std::cout << "Object Destructor \tCONTACT\n";
    return ;
}

void    Contact::addInfo(std::string message) {

    std::string keyWord;

    while (!std::cin.eof())
    {
        std::cout << "+ ----------------------------------- +\n";
        std::cout << "| Enter " << message << ":\n\n";
        std::getline(std::cin, keyWord);
        if (std::cin.eof())
            return ;
        std::cout << "+ ----------------------------------- +\n";
        if ((message.compare("First Name") == 0))
            this->firstName = keyWord;
        else if ((message.compare("Last Name") == 0))
            this->lastName = keyWord;
        else if ((message.compare("Nickname") == 0))
            this->nickname = keyWord;
        else if ((message.compare("Phone Number") == 0))
        {
            if (keyWord.find_first_not_of("0123456789 -()") != 0)
                this->phoneNumber = keyWord;
            else
            {
                std::cout << "Wrong Input." << '\n';
                std::cout << "Characters accepted: 0123456789 -()" << "\n\n";
                continue ;
            }
        }
        else if ((message.compare("Darkest Secret") == 0))
            this->darkestSecret = keyWord;            
        if (!keyWord.empty())
        {
            std::cout << "\n-> " << keyWord << " added as " << message << ".\n\n";
            break ;
        }
        std::cout << "Wrong input." << "\n\n";
     }
}

void    Contact::addContact(int index) {

    std::string answer;

    if (this->index != 0)
    {
        std::cout << "Index " << this->index << " is already in use.\n";
        std::cout << "Clear it aniway ? y/n \n\n";
        std::getline(std::cin, answer);
        if (std::cin.eof())
            return ;
        while (1)
        {
            if ((answer.compare("y") == 0))
            {
                this->index = index;
                break ;
            }
            else if ((answer.compare("n") == 0))
                return ;
            else
            {
                std::cout << "Wrong input. Please write y or n." << "\n\n";
                continue ;
            }
        }
    }
    else
    {
        this->index = index;
        std::cout << "\n| AT INDEX " << this->index << "\n\n";
    }
    std::cout << "+ ----------------------------------- +\n";
    std::cout << "|   WARNING : Maximum 26 characters   | \n";
    std::cout << "+ ----------------------------------- +\n";
    addInfo("First Name");
    addInfo("Last Name");
    addInfo("Nickname");  
    addInfo("Phone Number"); 
    addInfo("Darkest Secret"); 
}

void    Contact::printer(std::string print, int limit) {

    int pSize = print.size();
    if (pSize < limit)
    {
        std::cout.width(limit); std::cout << std::right << print << " |";
        return ;
    }
    if (pSize > limit)
    {
        print.resize(limit - 1);
        std::cout << print << ". |";
        return ;
    }
}

void    Contact::infoContact()    {

    std::cout << "\n+ --------------- + -------------------------- +\n";
    std::cout << "|           INDEX | ";
    std::cout.width(26); std::cout << std::right << index << " |\n";
    std::cout << "+ --------------- + -------------------------- +\n";
    std::cout << "|      FIRST NAME | ";
    Contact::printer(this->firstName, 26);
    std::cout << "\n";
    std::cout << "+ --------------- + -------------------------- +\n";
    std::cout << "|       LAST NAME | ";
    Contact::printer(this->lastName, 26);
    std::cout << "\n";
    std::cout << "+ --------------- + -------------------------- +\n";
    std::cout << "|        NICKNAME | ";
    Contact::printer(this->nickname, 26);
    std::cout << "\n";
    std::cout << "+ --------------- + -------------------------- +\n";
    std::cout << "|    PHONE NUMBER | ";
    Contact::printer(this->phoneNumber, 26);
    std::cout << "\n";   
    std::cout << "+ --------------- + --------------------------- \n";
    std::cout << "|  DARKEST SECRET | ";
    Contact::printer(this->darkestSecret, 26);
    std::cout << "\n";   
    std::cout << "+ --------------- + -------------------------- +\n";
}

void    Contact::printContact(std::string f, std::string l, std::string n)  {

    std::string index = std::to_string(this->index);

    std::cout << "\n+ -------- +";
    std::cout << " --------- +";
    std::cout << " --------- +";
    std::cout << " --------- +\n|";

    std::cout.width(9); std::cout << std::right << index << " |";
    printer(f, 10);
    printer(l, 10);
    printer(n, 10);
}

const std::string   Contact::getFirstName(void) {
    return (this->firstName);
}

const std::string   Contact::getLastName(void) {
    return (this->lastName);
}

const std::string   Contact::getNickname(void) {
    return (this->nickname);
}