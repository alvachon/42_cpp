/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 14:14:30 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name) :name_(name){

     std::cout << "|Object Constructor " << name_ << "\tHUMANB\n";
     return ;
}

HumanB::~HumanB(void) {

    std::cout << "Object Destructor \tHUMANB\n";
    return ;
}

void HumanB::setWeapon(Weapon &weapon)   {

    this->weapon_ = &weapon;
    return ;

}

void HumanB::attack(void)   {

    std::cout << this->name_ << " attacks with their " << this->weapon_->getType() << '\n';
    return ;

}
