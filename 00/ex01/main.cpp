/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/05/31 14:49:15 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

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

void    MakeObject(const char *cmd)
{
    Ex01::PhoneBook Repertoire;
    Ex01::Contact   Contacts;
    return ;
}

int main(int argc, const char *argv[])
{
    const char      *cmd;

    cmd = StartProgram(argc, argv);
    if (cmd != NULL)
    {
        std::cout << "Starting " << cmd << '\n';
        MakeObject(cmd);
    }
    std::cout << '\n';
    return (0);
}
