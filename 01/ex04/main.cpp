/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 15:52:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstddef> // std::size_t

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream   ifs(av[1]);
        std::string     newFile = av[1];
        std::ofstream   ofs(newFile.append(".replace"));
        std::string     line;
        std::size_t     start;
        std::size_t     len;

    //Chercher halp demain matin.
    // ifs.open();
    // ofs.open();
        while (ifs.good()) {
            getline(ifs, line);
            start = line.find(av[2]);
            if (start != std::string::npos)
            {
                line.begin()+start;
                len = line.find_first_not_of(av[2]);
                line.erase(len);
                line.insert(start, av[3]);
                line.rbegin();
            }
            ofs << line;
        }
        ofs << '\n';
        ifs.close();
        ofs.close();

    }
    return (0);
}   