/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/21 13:57:07 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>
#include <math.h>

//rhs : Right Hand Sign

class Fixed {

    public:
        Fixed(void);//Default Constructor
            Fixed(const int nbr) /*const*/;//Param Constructor Polymorphique
            Fixed(const float nbr) /*const*/;//Param Constructor Polymorphique

        Fixed(Fixed const & src);//Copy Constructor
        ~Fixed(void);//Destructor
        Fixed& operator=(const Fixed& rhs);//Assignation Constructor

        const int& getRawBits(void) const;
        void       setRawBits(const int raw);//init
        float      toFloat(void)    const;//ptr
        int        toInt(void)      const;//ptr

    private:
    int                 virgNbr_;
    static const int    lit_;

};

std::ostream & operator<<(std::ostream & ost, Fixed const & rhs);


#endif/* ************************************************** FIXED_H */