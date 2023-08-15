/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/18 14:34:24 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(void)  {

     std::cout << "Object Constructor \tZOMBIE\n";
     this->name_ = "Citizen";
}

Zombie::~Zombie(void) {

     std::cout << "Object Destructor  \tZOMBIE\n";
    return ;
}

void Zombie::announce(void) {

    std::cout << this->name_ << ":\tBraiiiiiiinnnzzzZ...\n";
}

const std::string Zombie::getCorrupt(std::string str)    {

    this->name_ = str;
    return (this->name_);
}