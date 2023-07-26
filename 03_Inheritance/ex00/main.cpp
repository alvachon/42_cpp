/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 09:14:23 by alvachon         ###   ########.fr       */
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
        ClapTrap Pikachu("Pikachu");
        for (int i = 0; i < 20; i++)
            Pikachu.attack("Raichu");
        Pikachu.beRepaired(5);
    }
    {
        //Verif if retrieve energy with 1 pts.
        ClapTrap Pikachu("Pikachu");
        for (int i = 0; i < 9; i++)
            Pikachu.takeDamage(1);
        Pikachu.beRepaired(5);
    }

    return (0);
}   