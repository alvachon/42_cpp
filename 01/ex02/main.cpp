/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 11:40:45 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Adress of brain is :\t\t" << &brain << '\n';
    std::cout << "Adress of *stringPTR is :\t" << stringPTR << '\n';
    std::cout << "Adress of *stringREF is :\t" << &stringREF << '\n';

    std::cout << "Value of brain is :\t\t" << brain << '\n';
    std::cout << "Value of *stringPTR is :\t" << *stringPTR << '\n';
    std::cout << "Value of &stringREF is :\t" << stringREF << '\n';

    return (0);
}