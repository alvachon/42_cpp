/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/05/30 15:25:23 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//https://www.youtube.com/watch?v=ts1Eek5w7ZA

namespace   addProg {

    void    print(const char *test)
    {
        std::cout << "Printing from add" << test;
    }
}

namespace   searchProg {

    void    print(const char *test)
    {
        std::cout << "Printing from search" << test;
    }
}

namespace   exitProg {

    void    print(const char *test)
    {
        std::cout << "Printing from exit" << test;
    }
}

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
    {
        std::cout << "Starting " << cmd << '\n';
        exitProg::print("TEST");
        std::cout << '\n';
        searchProg::print("TEST");
        std::cout << '\n';
        addProg::print("TEST");
    }
    std::cout << '\n';
    return (0);
}