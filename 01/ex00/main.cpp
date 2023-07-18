/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/18 12:23:53 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie  objDefault;
    Zombie  objSpecific("Specific Stack (Pile)");
    // Zombie  *objHeap = new Zombie("Specific Heap  (Tas)");
    // Zombie  *arrDefault = new Zombie[3];

    objDefault.announce();
    objSpecific.announce();
    // objHeap->announce();
    // arrDefault[0].announce();
    // arrDefault[1].announce();
    // arrDefault[2].announce();
    // delete      objHeap;
    // delete []   arrDefault;
    return (0);
}
