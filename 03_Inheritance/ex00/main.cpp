/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/24 16:14:44 by alvachon         ###   ########.fr       */
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

    return (0);
}   