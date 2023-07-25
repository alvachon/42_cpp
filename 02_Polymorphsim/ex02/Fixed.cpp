/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 13:44:47 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"


Fixed::Fixed(void) : fixedPointValue_(0) {

    return ;
}

Fixed::Fixed(const int nb) : fixedPointValue_(nb << scaling_) {

    return ;
}

Fixed::Fixed(const float nb) : fixedPointValue_(roundf(nb * (1 << scaling_))) {

    return ;
}

Fixed::Fixed(Fixed const & src) : fixedPointValue_(src.fixedPointValue_) {

    *this = src;
    return ;
}

Fixed::~Fixed(void) {

    return ;
}

const int& Fixed::getValue(void) const    {

    return (this->fixedPointValue_);
}

void Fixed::setValue(const int value) {
    this->fixedPointValue_ = value;
    return ;
}

Fixed& Fixed::operator=(const Fixed& rhs)   {
    
    this->fixedPointValue_ = rhs.fixedPointValue_;
    return (*this);
}

Fixed Fixed::operator+(const Fixed& rhs) const {
    
    return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    
    return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    
    return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    
    return (this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(const Fixed& rhs) const {
    
    return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(const Fixed& rhs) const {
    
    return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator!=(const Fixed& rhs) const {
    
    return (this->toFloat() != rhs.toFloat());
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

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2) {

    return (*ref2);
}
