/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/11 11:25:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.PhoneBook.h"

PhoneBook::PhoneBook(const char *cmd1, const char *cmd2, const char *cmd3) : \
 add(cmd1), search(cmd2), exit(cmd3) {

    std::cout << "|Object Constructor \tPHONEBOOK\n";
    std::cout << "|--------------------------------\n";
    std::cout << "|(initialization list, const)" << "\n|\n";
    std::cout << "| cmd1 (add) :\t\t" << this->add << '\n';
    std::cout << "| cmd2 (search) :\t" << this->search << '\n';
    std::cout << "| cmd3 (exit) :\t\t" << this->exit << '\n';
    std::cout << "|--------------------------------\n";
    return ;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "Object Destructor \tPHONEBOOK\n";
    return ;
}

void    PhoneBook::verifyEntry(void) {

    std::cout << "|Member function (1) \tPHONEBOOK\n";
    std::cout << "|--------------------------------\n";
    std::cout << "|(this)" << "\n\n";
    while (1)
    {
        if (strcmp(this->add, this->cmd) == 0)
            return  ;
        else if (strcmp(this->search, this->cmd) == 0)
            return  ;
        else if (strcmp(this->exit, this->cmd) == 0)
            return  ;
        else
        {
            std::cout << "Wrong input." << "\n\n";
            std::cout << "Enter Program: " << '\n';
            std::cin >> this->cmd;
        }
    }
}