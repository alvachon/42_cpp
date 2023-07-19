/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 12:47:35 by alvachon         ###   ########.fr       */
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

//const std::string   Contact::getNickname(void)
const std::string& Weapon::getType(void)    {
    return (this->type_);
}