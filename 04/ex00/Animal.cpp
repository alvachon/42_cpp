/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/02 10:48:47 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

//Private
   Ianimal::Ianimal(void)  {
   
   std::cout << " Instance Animal Default Object created.\n";
       return ;
   }

//Public

    Ianimal *Ianimal::getInterface(void)    {

        if (interfaceCount == 0)   {
            
            Ianimal *ptr;

            ptr = new Ianimal;
            interfaceCount++;
            return (ptr);
        }
        else
            return (NULL);
    }

    Ianimal::~Ianimal(void)  {

    std::cout << " Instance Animal Default Object destructed.\n";
        return ;
    }

    void    Ianimal::hello(void)    {

        std::cout << " Hello from Interface Animal !\n";
        return ;
    }