/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/12 10:04:12 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Contact.h"

//Constructeur par defaut
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

void    Contact::addContact(int index) {

     std::cout << "Enter first Name:\n";
    std::cin >> this->firstName;
     std::cout << this->firstName << "added as First Name.\n";
     std::cout << "Enter last Name:\n";
     std::cin >> this->lastName;
     std::cout << this->lastName << "added as Last Name.\n";
}