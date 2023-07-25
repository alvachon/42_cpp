/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:34:53 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void)
{
    {
        Fixed       a;

        //Incrementation
        std::cout << a << '\n';
        std::cout << ++a << '\n';
        std::cout << a << '\n';
        std::cout << a++ << '\n';
        std::cout << a << '\n';
    }
    {
        Fixed    b;

        //Decrementation
        std::cout << b << '\n';
        std::cout << --b << '\n';
        std::cout << b << '\n';
        std::cout << b-- << '\n';
        std::cout << b << '\n';
    }
    {
        Fixed const c(2);
        Fixed const d(4);
        // Fixed c(2);
        // Fixed d(4);

        //Static Member Function
        std::cout << Fixed::max(c, d) << '\n';
        std::cout << Fixed::min(c, d) << '\n';
    }
    {
        //Arithmetic
        Fixed const e(Fixed(5.05f) * Fixed(2));
        // Fixed const e(Fixed(4) / Fixed(2));
        // Fixed const e(Fixed(4) - Fixed(2));
        // Fixed const e(Fixed(4) + Fixed(2));
        std::cout << e << '\n';
    }
    {
        //Comparison
        Fixed const f(Fixed(4) > Fixed(2));
        if (4 > 2)
            std::cout << "1\n";//false
        else
            std::cout << "0\n";//true  
        // Fixed f(Fixed(4) < Fixed(2));
        // Fixed f(Fixed(4) == Fixed(2));
        // Fixed f(Fixed(4) != Fixed(2));
        // Fixed f(Fixed(4) >= Fixed(2));
        // Fixed f(Fixed(4) <= Fixed(2));
        std::cout << f << '\n';
        std::cout << "--------\n";
    }   
    {
        Fixed       a;
        Fixed const b(Fixed(5.05f) * Fixed(2));
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;

        std::cout << b << std::endl;

        std::cout << Fixed::max(a, b) << std::endl;

    }




    return (0);
}   