/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 12:38:25 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>

class Fixed {

    public:
        Fixed(void);//Default Constructor
        Fixed(Fixed const & src);//Copy Constructor
        ~Fixed(void);//Destructor
        Fixed& operator=(const Fixed& rhs);//Assignation Constructor

        const int& getRawBits(void) const;
        void       setRawBits(const int raw);

    private:
    int                 nb_;
    static const int    maxDigitsRight_ = 8;/* maximum # of 0's right of decimal
                                             before using scientific notation */

};

#endif/* ************************************************** FIXED_H */