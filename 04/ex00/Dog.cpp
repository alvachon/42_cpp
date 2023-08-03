/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/03 14:21:21 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"

Dog::Dog() : Animal("Dog") { return ; }

Dog::~Dog() { return ; }

Dog::Dog(Dog & ref) : Animal("Dog") { *this = ref; return ; }

Dog & Dog::operator=(Dog const & rhs) { this->type_ = rhs.type_ ; return (*this); }

void    Dog::makeSound(void) const {

    std::cout << "Woof Woof !\n";
}
