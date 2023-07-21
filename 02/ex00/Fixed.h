/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/21 13:09:32 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>

//rhs : Right Hand Sign

class Fixed {

    public:
        Fixed(void);//Default Constructor
        Fixed(Fixed const & src);//Copy Constructor
        ~Fixed(void);//Destructor
        Fixed& operator=(const Fixed& rhs);//Assignation Constructor

        const int& getRawBits(void) const;
        void       setRawBits(const int raw);//init 

    private:
    int                 virgNbr_;
    static const int    lit_;

};

// const int Fixed::lit_ = 8; ( main call error for dup, move t0 Fixed.cpp)

#endif/* ************************************************** FIXED_H */