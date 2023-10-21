/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/10/21 15:40:32 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

//reinterpret cast. test facile.

//uintptr_t
//void * can be converted to this type and be converted back to uintptr_t

    // struct	holder
    // {
	//     int x;
	//     int y;
	//     char c;
	//     bool b;
    // };



//https://www.geeksforgeeks.org/reinterpret_cast-in-c-type-casting-operators/


int main(void)
{
    {
		struct holder s;

		s.x = 5;
		s.y = 10;
		s.c = 'a';
		s.b = true;

		try
	   {
		  Data holdmystruct(s);

       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    return (0);
}
