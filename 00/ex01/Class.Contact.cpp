/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/12 14:41:42 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Contact.h"

Contact::Contact(void)  {

    std::string clear = "CLEAR";
    std::cout << "|Object Constructor \tCONTACT\n";
    this->index = 0;
    this->firstName = clear;
    this->lastName = clear;
    this->nickname = clear;
    this->phoneNumber = clear;
    this->darkestSecret = clear;
}

Contact::~Contact(void) {
    std::cout << "Object Destructor \tCONTACT\n";
    return ;
}

void    Contact::addInfo(std::string message) {

    std::string keyWord;
    while (1)
    {
        std::cout << "Enter " << message << ":\n\n";
        std::getline(std::cin, keyWord);
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
            std::cout << keyWord << " added as " << message << ".\n\n";
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
        std::cout << "at Index : " << this->index << "\n\n";
    }
    addInfo("First Name");
    addInfo("Last Name");
    addInfo("Nickname");  
    addInfo("Phone Number"); 
    addInfo("Darkest Secret"); 
}

void    Contact::printContact(void)
{
    std::cout << "\n+ - +";//index
    std::cout << " - - - - - ";//firstName
    std::cout << "+ - - - - +";//lastName
    std::cout << " - - - - - ";//nickname
    std::cout << "+ - - - - +";//phone
    std::cout << " - - - - - +";//darkest

    std::cout << "\n+ " << this->index << " |";//index
    std::cout << " " << this->firstName << "\t|";//first name
    std::cout << " " << this->lastName << "\t|";//last name
    std::cout << " " << this->nickname << "\t|";//nickname
    std::cout << " " << this->phoneNumber << "\t|";//nickname
}