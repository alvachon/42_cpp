/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 13:16:45 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "FragTrap.h"

int main(void)
{
    {
       FragTrap Pikachu("Pikachu");//1
       Pikachu.takeDamage(2);
       FragTrap Ditto(Pikachu, "Ditto");//2
       Ditto.takeDamage(2);
       FragTrap Pigeotto("Pigeotto");

       Pigeotto = Pikachu;//3
       Pigeotto.takeDamage(2);

    }
    {
        //Verif if dying after 10 loss points
        FragTrap Pikachu("Pikachu");
        for (int i = 0; i < 10; i++)
            Pikachu.takeDamage(30);
    }
    {
        //highfive
        FragTrap Pikachu("Pikachu");
        for (int i = 0; i < 20; i++)
            Pikachu.attack("Raichu");
        Pikachu.beRepaired(5);
        Pikachu.highFivesGuys();
    }
    {
        //Verif if retrieve energy with 1 pts.
        FragTrap Pikachu("Pikachu");
        for (int i = 0; i < 9; i++)
            Pikachu.takeDamage(1);
        Pikachu.beRepaired(5);
    }

    return (0);
}   