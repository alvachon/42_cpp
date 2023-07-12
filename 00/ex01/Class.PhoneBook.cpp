/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/12 13:42:09 by alvachon         ###   ########.fr       */
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
            //list_contact (ls)
            //select_contact()
            return  ;
        }
        else if (this->cmd.compare(this->exitCmd) == 0)
            return  ;
        else
            std::cout << "Wrong input." << "\n\n";
        std::cout << "\nEnter Program: " << '\n';
         std::getline(std::cin, this->cmd);
    }
}