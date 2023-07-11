/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/11 12:48:15 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Contact.h"

Contact::Contact(const int i, char *e1, char *e2, char *e3, char *e4, char *e5) \
 :  index(i), firstName(e1), lastName(e2), nickname(e3), phoneNumber(e4), \
    darkestSecret(e5) {

    std::cout << "|Object Constructor \tCONTACT\n";
    std::cout << "|--------------------------------\n";
    std::cout << "| index :\t\t" << this->index << '\n';
    std::cout << "| firstName :\t" << this->firstName << '\n';
    std::cout << "| lastName :\t" << this->lastName << '\n';
    std::cout << "| nickname :\t" << this->firstName << '\n';
    std::cout << "| phone :\t" << this->phoneNumber << '\n';
    std::cout << "| darkestSecret :\t" << this->darkestSecret << '\n';
    std::cout << "|--------------------------------\n";
    return ;
}

Contact::~Contact(void) {
    std::cout << "Object Destructor \tCONTACT\n";
    return ;
}