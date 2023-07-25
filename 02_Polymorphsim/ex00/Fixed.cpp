/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 11:22:55 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void) : nb_(0) {

    std::cout << "Default constructor called\n";
    return ;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called\n";
    return ;
}

Fixed::Fixed(Fixed const & src) : nb_(src.nb_) {
    std::cout << "Copy Constructor called\n";
    *this = src;
    return ;
}

Fixed& Fixed::operator=(const Fixed& rhs)   {
    
    std::cout << "Copy assignement operator called\n";
    getRawBits();
    return (*this);
}

const int& Fixed::getRawBits(void) const    {

    std::cout << "getRawBits member function called\n";
    return (nb_);
}

void Fixed::setRawBits(const int raw) {
    this->nb_ = raw;
    return ;
}



