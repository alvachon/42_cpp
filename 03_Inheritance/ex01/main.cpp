/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 13:14:56 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int main(void)
{
    {
       ScavTrap Pikachu("Pikachu");//1
       Pikachu.takeDamage(2);
       ScavTrap Ditto(Pikachu, "Ditto");//2
       Ditto.takeDamage(2);
       ScavTrap Pigeotto("Pigeotto");

       Pigeotto = Pikachu;//3
       Pigeotto.takeDamage(2);

    }
    {
        //Verif if dying after 10 loss points
        ScavTrap Pikachu("Pikachu");
        for (int i = 0; i < 10; i++)
            Pikachu.takeDamage(20);
    }
    {
        //guardGate
        ScavTrap Pikachu("Pikachu");
        for (int i = 0; i < 20; i++)
            Pikachu.attack("Raichu");
        Pikachu.beRepaired(20);
        Pikachu.guardGate();
    }
    {
        //Verif if retrieve energy with 1 pts.
        ScavTrap Pikachu("Pikachu");
        for (int i = 0; i < 9; i++)
            Pikachu.takeDamage(1);
        Pikachu.beRepaired(5);
    }

    return (0);
}   