/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/24 16:11:56 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
    {
       ClapTrap Pikachu("Pikachu");
       Pikachu.takeDamage(2);
       ClapTrap Ditto(Pikachu, "Ditto");
       Ditto.takeDamage(2);
       ClapTrap Pigeotto("Pigeotto");

       Pigeotto = Pikachu;
       Pigeotto.takeDamage(2);

        // for (int i = 0; i < 2; i++)
        //     Ditto.attack("Raichu");
    }
    // {
    //     ClapTrap Togepi("Togepi");

    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);

    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);
    //     Togepi.beRepaired(1);

    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);

    //     Togepi.attack("Ditto");
    //     Togepi.attack("Ditto");
    
    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);
    //     Togepi.takeDamage(2);
    // }


    return (0);
}   