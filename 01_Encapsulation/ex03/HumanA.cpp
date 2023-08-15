/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 13:46:13 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) :name_(name), weapon_(weapon){
    
    std::cout << "|Object Constructor " << name_ << "\tHUMANA\n";
    return ;
}

HumanA::~HumanA(void) {

    std::cout << "Object Destructor \tHUMANA\n";
    return ;
}

void HumanA::attack(void)   {

std::cout << this->name_ << " attacks with their " << weapon_.getType() << '\n';
return ;

}