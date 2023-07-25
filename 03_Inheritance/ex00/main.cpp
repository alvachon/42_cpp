/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 16:27:39 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
    {
       ClapTrap Pikachu("Pikachu");//1
       Pikachu.takeDamage(2);
       ClapTrap Ditto(Pikachu, "Ditto");//2
       Ditto.takeDamage(2);
       ClapTrap Pigeotto("Pigeotto");

       Pigeotto = Pikachu;//3
       Pigeotto.takeDamage(2);

    }
    {
        //Verif if dying after 10 loss points
        ClapTrap Pikachu("Pikachu");
        for (int i = 0; i < 10; i++)
            Pikachu.takeDamage(2);
    }
    {
        //Verif if cant do something after 10 energy loss
        /*
        0. Rm nb print
        1. print only one time "" is tired.
        */
        ClapTrap Pikachu("Pikachu");
        for (int i = 0; i < 20; i++)
            Pikachu.attack("Raichu");
    }
        //Verif if he can retrieve with 1 pts energy

    return (0);
}   