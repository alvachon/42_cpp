/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/13 09:44:57 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.PhoneBook.h"
#include "Class.Contact.h"

//Constructeur par defaut
PhoneBook::PhoneBook(void) {

    std::cout << "|Object Constructor \tPHONEBOOK\n";
    std::cout << "|--------------------------------\n";
    std::cout << "|--------------------------------\n";
    return ;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "Object Destructor \tPHONEBOOK\n";
    std::cout << "|--------------------------------\n";
    std::cout << "|--------------------------------\n";
    return ;
}

void    PhoneBook::listContact(void)    {

    int i = 0;
    std::cout << "+ - +";//index
    std::cout << " - - - - - ";//firstName
    std::cout << "+ - - - - - - - +";//lastName
    std::cout << " - - - - - - - ";//nickname
    std::cout << "+ - - - - - - - +";//phone
    std::cout << " - - - - - - - +";//darkest

    std::cout << "\n| " << "n" << " |";
    std::cout << " firstname" << "\t|";
    std::cout << " lastname" << "\t|";
    std::cout << " nickname" << "\t|";
    std::cout << " phonenumber" << "\t|";
    std::cout << " dark secret" << "\t|";
    
    while (i != 8)
    {
        PhoneBook::contact[i].printContact();
        i++;
    }
    std::cout << "\n+ - +";//index
    std::cout << " - - - - - ";//firstName
    std::cout << "+ - - - - - - - +";//lastName
    std::cout << " - - - - - - - +";//nickname
    std::cout << " - - - - - - - +";//phone
    std::cout << " - - - - - - - +";//darkest
}

void    PhoneBook::verifyEntry(void) {

    int i = 0;
    std::cout << "|Member function (2) \tPHONEBOOK\n";
    std::cout << "|--------------------------------\n";
    
    while (1)
    {
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
            //select_contact()
        }
        else if (this->cmd.compare(this->exitCmd) == 0)
            return  ;
        else
            std::cout << "Wrong input." << "\n\n";
        std::cout << "\nEnter Program: " << '\n';
        std::getline(std::cin, this->cmd);
    }
}

