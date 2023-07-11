/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/11 12:42:29 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.PhoneBook.h"
#include <string>

/*
// namespaces
// stdio streams
// class and instance
// member attributes and member functions
// this
// initialization list
// const
* visibility
* class vs stuct
* accessors
* comparisons
* non member attributes and non-member functions
* pointers to members

* Cpp container (intro) https://www.youtube.com/watch?v=6OoSgY6NVVk
    * standard array (pseudo container)
    & Container : No data.
* string class https://www.youtube.com/watch?v=dSfjBoip4c0
* IO Manipulators
*/

int main(void)
{
    char        *input;
    PhoneBook   user("ADD", "SEARCH", "EXIT");

    std::cout << "|MAIN\n";
    std::cout << "|--------------------------------\n";
    std::cout << "|(member attributes, stdio streams)" \
     << "\n\n";
    std::cout << "Enter Program: " << '\n';
    std::cin >> input;
    user.cmd = input;
    std::cout << "\n\n";
    user.verifyEntry();
    std::cout << "\nGood entry " << '\n';
    std::cout << '\n';
    return (0);
}
