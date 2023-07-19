/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 14:12:04 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(void)  {

    std::cout << "|Object Constructor \tWEAPON\n";
}

Weapon::Weapon(std::string type) :type_(type) {

    std::cout << "|Object Constructor " << type_ << "\tWEAPON\n";

}

Weapon::~Weapon(void) {

    std::cout << "Object Destructor \tWEAPON\n";
    return ;
}

const std::string& Weapon::getType(void)    {
    return (this->type_);
}

const void Weapon::setType(std::string type) {
    this->type_ = type;
    return ;
}