/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {

    std::cout << " Constructor from " << type_ << " \n";
    return ;
}

WrongAnimal::WrongAnimal(std::string type) : type_(type) {

    std::cout << " Constructor from " << type_ << " \n";
    return ;
}

WrongAnimal::~WrongAnimal() {

    std::cout << " Destructor from " << type_ << " \n";
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal & src) {

    *this = src;
    return ;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & rhs)   {
    
    this->type_ = rhs.type_;
    return (*this);
}

void    WrongAnimal::makeSound(void) const {

    std::cout << "MIIARAFFFJFJEIJFIFJF \n";
    return ;
}

const std::string& WrongAnimal::getType(void) const {

    return (this->type_);
}