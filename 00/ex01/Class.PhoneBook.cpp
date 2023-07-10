/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/10 14:56:07 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.PhoneBook.h"

PhoneBook::PhoneBook(void) {
    std::cout << "Object Constructor \tPHONEBOOK\n";
    return ;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "Object Destructor \tPHONEBOOK\n";
    return ;
}

void    PhoneBook::enterProgram(void) {

    std::cout << "Enter Program: "<< '\n';
    return ;
}

void    PhoneBook::verifyEntry(std::string input) {

    std::cout << input << " Entered" << '\n';
    //should compare entry and return entry.
    //Revoir video initialisation list, bruteforce elems
    return  ;
}
