/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/10 14:57:05 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.PhoneBook.h"

int main(void)
{
    
    PhoneBook   user;

    user.enterProgram();

    std::cin >> user.cmd;
    user.verifyEntry(user.cmd);
    std::cout << '\n';
    return (0);
}
