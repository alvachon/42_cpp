/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/03 14:21:57 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"

Cat::Cat() : Animal("Cat") { return ; }

Cat::~Cat() { return ; }

Cat::Cat(Cat & ref) : Animal("Cat") { *this = ref; return ; }

Cat & Cat::operator=(Cat const & rhs) { this->type_ = rhs.type_ ; return (*this); }

void    Cat::makeSound(void) const {

    std::cout << "Meow !\n";
}
