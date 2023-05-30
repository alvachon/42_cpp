/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:03:19 by alvachon          #+#    #+#             */
/*   Updated: 2023/05/30 11:20:10 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string toUpperCase(const std::string &word)
{
    int         i = 0;
    std::string str = word;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i]+= ('A' - 'a');
        i++;
    }
    return (str);
}

int main(int argc, const char *argv[])
{
    int i = 1;

    if (argc <= 1)
    {
        std::cerr << "Error\n";
        return (1);
    }
    while (i < argc)
    {
        std::cout << toUpperCase(argv[i]);
        i++;
        if (i != argc)
            std::cout << ' ';
    }
    std::cout << '\n';
    return (0);
}