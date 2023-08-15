/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/20 14:16:51 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(void)   {

    return ;
}

Harl::~Harl(void) {

    return ;
}

void    Harl::complain(std::string level)   {

    const   std::string alert[4] =
        { "DEBUG", "INFO", "WARNING", "ERROR"};
    void   (Harl::*f[4])(void) = 
        {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int niv = find(alert, alert + 4, level) - alert;

    if (niv < 4)
        (this->*f[niv])();
    else
        std::cout << "\nNOT LEGIT.\n";
    return ;
}

void    Harl::debug(void)   {

    std::cout << "\n[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my" <<
    "7XL-double-cheese-triple-pickle-specialketchup burger.I really do !\n";
    return ;
}

void    Harl::info(void)    {

    std::cout << "\n[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money." <<
    "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
    return ;
}

void    Harl::warning(void) {

    std::cout << "\n[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free." <<
    "I’ve been coming for years whereas you started working here since last month.\n";
    return ;
}

void    Harl::error(void)   {

    std::cout << "\n[ ERROR ]\n";
    std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
    return ;
}
