/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 12:39:59 by alvachon         ###   ########.fr       */
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

Dog::Dog(Dog & src) : Animal(src) {

    this->type_ = src.type_; 
    setBrain();
    return ;
}

Dog & Dog::operator=(Dog const & rhs) {

    if (this != &rhs)
        *this = rhs;
     return (*this); 
}

void    Dog::makeSound(void) const {

    std::cout << "Woof Woof !\n";
}

void   Dog::setBrain(void) {

    this->brain_ = new Brain();
    std::cout << " Brain Made for " << type_ << " \n";
    return ;
}