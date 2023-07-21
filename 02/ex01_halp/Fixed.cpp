/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/21 13:44:31 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::lit_ = 8;
//-> https://stackoverflow.com/questions/177437/what-does-const-static-mean-in-c-and-c

Fixed::Fixed(void) : virgNbr_(0) {

    std::cout << "Default constructor called\n";
    return ;
}

Fixed::Fixed(const int nbr) : virgNbr_(nbr) {

    std::cout << "Param constructor called\n";
    return ;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called\n";
    return ;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy Constructor called\n";
    *this = src;
    return ;
}

Fixed& Fixed::operator=(const Fixed& rhs)   {
    
    std::cout << "Copy assignement operator called\n";
    virgNbr_ = rhs.virgNbr_;
    return (*this);
}

const int& Fixed::getRawBits(void) const    {

    std::cout << "getRawBits member function called\n";
    return (this->virgNbr_);
}

void Fixed::setRawBits(const int raw) {
    this->virgNbr_ = raw;
    return ;
}

float   Fixed::toFloat(void)    const {

    return (roundf(this->virgNbr_));
}

int     Fixed::toInt(void)      const {

    return (this->virgNbr_);
}

std::ostream & operator<<(std::ostream & ost, Fixed const & rhs) {

    ost << rhs.toInt();
    ost << '.';
    ost << rhs.toFloat();
    return (ost);
}
