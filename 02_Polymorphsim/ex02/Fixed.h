/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 13:44:46 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>
#include <math.h>

//https://spin.atomicobject.com/2012/03/15/simple-fixed-point-math/

class Fixed {

    public:
        Fixed(void);//Default Constructor
        Fixed(const int nb);//Int Constructor
        Fixed(const float nb);//Float Constructor
        Fixed(Fixed const & src);//Copy Constructor
        ~Fixed(void);//Destructor

        const int& getValue(void) const;
        void       setValue(const int value);

        Fixed& operator=(const Fixed& rhs);//Assignation Constructor
        Fixed  operator+(const Fixed& rhs) const;
        Fixed  operator-(const Fixed& rhs) const;
        Fixed  operator*(const Fixed& rhs) const;
        Fixed  operator/(const Fixed& rhs) const;
        bool   operator>(const Fixed& rhs) const;
        bool   operator<(const Fixed& rhs) const;
        bool   operator!=(const Fixed& rhs) const;

        int           toInt(void)   const;
        float         toFloat(void)   const;

        Fixed &max(Fixed &ref1, Fixed &ref2);

    private:
    int                 fixedPointValue_;
    static const int    scaling_ = 8;//fracBits

};

std::ostream & operator<<(std::ostream & ost, Fixed const & rhs);


#endif/* ************************************************** FIXED_H */