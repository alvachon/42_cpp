/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/03 14:22:16 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"
#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat") { return ; }

WrongCat::~WrongCat() { return ; }

WrongCat::WrongCat(WrongCat & ref) : WrongAnimal("WrongCat") { *this = ref; return ; }

WrongCat & WrongCat::operator=(WrongCat const & rhs) { this->type_ = rhs.type_ ; return (*this); }

void    WrongCat::makeSound(void) const {

    WrongAnimal::makeSound();
}
