/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 11:00:43 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"

Dog::Dog() : Animal("Dog") {

    setBrain();
    return ;
}

Dog::~Dog() {
    
    delete brain_;
    std::cout << " Brain for " << type_ << " deleted \n";    
    return ;
}

Dog::Dog(Dog & ref) : Animal("Dog") {

    *this = ref; 
    setBrain();
    return ;
}

Dog & Dog::operator=(Dog const & rhs) { this->type_ = rhs.type_ ; return (*this); }

void    Dog::makeSound(void) const {

    std::cout << "Woof Woof !\n";
}

void   Dog::setBrain(void) {

    this->brain_ = new Brain();
    std::cout << " Brain Made for " << type_ << " \n";
    return ;
}