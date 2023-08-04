/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 11:00:43 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"

Cat::Cat() : Animal("Cat") {
    
    setBrain();
    return ;
}

Cat::~Cat() {
    
    delete brain_;
    std::cout << " Brain for " << type_ << " deleted \n";  
    return ;
}

Cat::Cat(Cat & ref) : Animal("Cat") {
    *this = ref;
    setBrain();
    return ;
}

Cat & Cat::operator=(Cat const & rhs) { this->type_ = rhs.type_ ; return (*this); }

void    Cat::makeSound(void) const {

    std::cout << "Meow !\n";
}

void   Cat::setBrain(void) {

    this->brain_ = new Brain();
    std::cout << " Brain Made for " << type_ << " \n";
    return ;
}