/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/18 13:42:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie  *newZombie(std::string name);//newZombie.cpp
void    randomChump(std::string name);//tandomChump.cpp

int main(void)
{
    Zombie  objDefault;
    Zombie  objSpecific("Specific Stack (Pile)");
    Zombie  *specHeapFt = newZombie("Specific Heap (Tas)  -BY FT-");

    objDefault.announce();
    objSpecific.announce();
    specHeapFt->announce();
    randomChump("Specific Stack (Pile) -BY FT-");
    delete      specHeapFt;
    return (0);
}

// int main(void)
// {
//     Zombie  *objHeap = new Zombie("Specific Heap  (Tas)");
//     Zombie  *arrDefault = new Zombie[3];

//     objHeap->announce();
//     arrDefault[0].announce();
//     arrDefault[1].announce();
//     arrDefault[2].announce();

//     delete      objHeap;
//     delete []   arrDefault;
//     return (0);
// }
