/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() : type_("Animal") {

    Brain *newBrain = new Brain();
    std::cout << " Constructor from " << type_ << " \n";
    this->brain_ = newBrain;
    std::cout << " Brain Made for " << type_ << " \n";
    return ;
}

Animal::Animal(std::string type) : type_(type) {

    Brain *newBrain = new Brain();
    std::cout << " Constructor from " << type_ << " \n";
    this->brain_ = newBrain;
    std::cout << " Brain Made for " << type_ << " \n";
    return ;
}

Animal::~Animal() {

    std::cout << " Destructor from " << type_ << " \n";
    delete brain_;
    std::cout << " Brain deleted \n";
    return ;
}

Animal::Animal(Animal & src) {

    std::cout << " Constructor from copy " << type_ << " \n";
    *this = src;
    return ;
}

Animal& Animal::operator=(Animal const & rhs)   {

    std::cout << " Operator " << type_ << " \n";
    this->type_ = rhs.type_;
    return (*this);
}

void    Animal::makeSound(void) const {

    return ;
}

const std::string& Animal::getType(void) const {

    return (this->type_);
}