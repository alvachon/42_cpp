/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/05/30 12:39:56 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const char    *StartProgram(int argc, const char *argv[])
{
    int         i = 0;
    const char  *list[] = {"ADD", "SEARCH", "EXIT", NULL};

    if (argc <= 1 || argc > 2)
        return (NULL);
    while (list[i] != NULL)
    {
        if (strcmp(list[i], argv[argc - 1]) == 0)
            return (list[i]);
         ++i;
    }
    return (NULL);
}

int main(int argc, const char *argv[])
{
    const char    *cmd = StartProgram(argc, argv);

    if (cmd != NULL)
        std::cout << "Starting " << cmd;
    std::cout << '\n';
    return (0);
}