/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/02 10:48:46 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

int Ianimal::interfaceCount = 0;

int main(void)
{
    Ianimal* pInterface = Ianimal::getInterface();

    if (pInterface)
        pInterface->hello();
    else
        std::cout << "No more Ianimal can be created. \n";
    
    // Ianimal* p = Ianimal::getInterface();

    // if (p)
    //     p->hello();
    // else
    //     std::cout << "No more Ianimal can be created. \n";
    
    delete pInterface;
    return (0);
}   