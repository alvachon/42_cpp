/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:38:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>
#include <math.h>

class Fixed {

    public:
        Fixed(void);//Default Constructor
        Fixed(const int nb);//Int Constructor
        Fixed(const float nb);//Float Constructor
        Fixed(Fixed const & src);//Copy Constructor
        ~Fixed(void);//Destructor

        Fixed& operator=(const Fixed& rhs);//Assignation Constructor

        Fixed  operator+(Fixed rhs) const;
        Fixed  operator-(Fixed rhs) const;
        Fixed  operator*(Fixed rhs) const;
        Fixed  operator/(Fixed rhs) const;
        bool   operator>(Fixed rhs) const;
        bool   operator<(Fixed rhs) const;
        bool   operator!=(Fixed rhs) const;
        bool   operator==(Fixed rhs) const;
        bool   operator>=(Fixed rhs) const;
        bool   operator<=(Fixed rhs) const;

        /*The compiler uses the int argument to distinguish between
        the prefix and postfix increment operators.
        For implicit calls, the default value is zero. */
        Fixed  operator++(void);
        Fixed  operator--(void);
        Fixed  operator++(int);
        Fixed  operator--(int);

        int           toInt(void)   const;
        float         toFloat(void)   const;

        //static member function
        static Fixed& max(Fixed& ref1, Fixed& ref2);
        static Fixed& min(Fixed& ref1, Fixed& ref2);
        static const Fixed& max(const Fixed& ref1, const Fixed& ref2);
        static const Fixed& min(const Fixed& ref1, const Fixed& ref2);

    private:
    int                 fixedPointValue_;
    static const int    scaling_ = 8;

};

std::ostream & operator<<(std::ostream & ost, Fixed const & rhs);


#endif/* ************************************************** FIXED_H */