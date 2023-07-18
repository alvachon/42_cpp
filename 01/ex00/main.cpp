/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/18 11:56:42 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie  objDefault;
    Zombie  objSpecific("Specific Stack (Pile)");
    // Zombie*  objHeap = newZombie("Specific Heap (Tas)");

    objDefault.announce();
    objSpecific.announce();
    // objHeap.announce();
    // delete.objHeap;
    return (0);
}
