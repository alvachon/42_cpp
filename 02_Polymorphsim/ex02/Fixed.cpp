/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:50 by alvachon         ###   ########.fr       */
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

Fixed& Fixed::operator=(const Fixed& rhs)   {
    
    this->fixedPointValue_ = rhs.fixedPointValue_;
    return (*this);
}

Fixed Fixed::operator+(Fixed rhs) const {
    
    return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed rhs) const {
    
    return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed rhs) const {
    
    return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed rhs) const {
    
    return (this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(Fixed rhs) const {
    
    return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed rhs) const {
    
    return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator!=(Fixed rhs) const {
    
    return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator==(Fixed rhs) const {
    
    return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator>=(Fixed rhs) const {
    
    return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed rhs) const {
    
    return (this->toFloat() <= rhs.toFloat());
}

Fixed Fixed::operator++(void) {

    this->fixedPointValue_++;
    return (*this);
}

Fixed Fixed::operator--(void) {

    this->fixedPointValue_--;
    return (*this);
}

Fixed Fixed::operator++(int) {
    
    Fixed temp = *this;
    ++*this;
    return (temp.toFloat());
}

Fixed Fixed::operator--(int) {

    Fixed temp = *this;
    --*this;
    return (temp.toFloat());
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2) {

    if (ref1.toFloat() >= ref2.toFloat())
        return (ref1);
    return (ref2);
}

Fixed &Fixed::min(Fixed &ref1, Fixed &ref2) {

    if (ref1.toFloat() <= ref2.toFloat())
        return (ref1);
    return (ref2);
}

const Fixed &Fixed::max(const Fixed &ref1, const Fixed &ref2) {

    if (ref1.toFloat() >= ref2.toFloat())
        return (ref1);
    return (ref2);
}

const Fixed &Fixed::min(const Fixed &ref1, const Fixed &ref2) {

    if (ref1.toFloat() <= ref2.toFloat())
        return (ref1);
    return (ref2);
}

int     Fixed::toInt(void)      const {

    return (this->fixedPointValue_ >> scaling_);
}

float   Fixed::toFloat(void)      const {

    return ((float)this->fixedPointValue_ / (float)(1 << scaling_));
}

std::ostream & operator<<(std::ostream & ost, Fixed const & rhs) {

    ost << rhs.toFloat();

    return (ost);
}
