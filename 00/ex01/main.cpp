/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/17 15:07:20 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.PhoneBook.h"
#include <string>

int main(void)
{
    PhoneBook   phoneBook;

    std::cout << "\n+ ----------------------------------- +\n";
    std::cout << "|   WELCOME TO REPERTORY PHONEBOOK !  |\n";
    std::cout << "+ ----------------------------------- +\n";
    phoneBook.verifyEntry();
    std::cout << "| EXIT. \n";
    return (0);
}
