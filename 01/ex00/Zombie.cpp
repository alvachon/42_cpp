/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/18 12:22:23 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>
#include <new>

Zombie::Zombie(void)  {

    std::cout << "Object Constructor (Default) \tZOMBIE\n";
    this->name_ = "Default  Stack (Pile)";
}

Zombie::Zombie(std::string name) :name_(name) {

    std::cout << "Object Constructor (Specific) \tZOMBIE\n";
    this->name_ = name;
}

Zombie::~Zombie(void) {
    std::cout << "Object Destructor \tZOMBIE\n";
    return ;
}

void Zombie::announce(void) {

    std::cout << this->name_ << ":\tBraiiiiiiinnnzzzZ...\n";
}
