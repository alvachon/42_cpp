/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/17 11:20:15 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"


Fixed::Fixed(void) : fixedPointValue_(0) {

    std::cout << "Default constructor called\n";
    return ;
}

Fixed::Fixed(const int nb) : fixedPointValue_(nb << scaling_) {

    std::cout << "Int constructor called\n";
    return ;
}

Fixed::Fixed(const float nb) : fixedPointValue_(roundf(nb * (1 << scaling_))) {

    std::cout << "Float constructor called\n";
    return ;
}

Fixed::Fixed(Fixed const & src) : fixedPointValue_(src.fixedPointValue_) {
    std::cout << "Copy Constructor called\n";
    *this = src;
    return ;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called\n";
    return ;
}

Fixed& Fixed::operator=(const Fixed& rhs)   {
    
    std::cout << "Copy assignement operator called\n";
    this->fixedPointValue_ = rhs.fixedPointValue_;
    return (*this);
}

int     Fixed::toInt(void)      const {

    return (this->fixedPointValue_ >> scaling_);
}

//Will return the floating point value
float   Fixed::toFloat(void)      const {

    return ((float)this->fixedPointValue_ / (float)(1 << scaling_));
}

std::ostream & operator<<(std::ostream & ost, Fixed const & rhs) {

    ost << rhs.toFloat();

    return (ost);
}
