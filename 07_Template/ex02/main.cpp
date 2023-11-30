/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:40:44 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/30 19:38:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.h"

int main( void )
{
	{	// Test 1 : Construction sans paramètres : crée un array vide.
		Array<char>	tab;
	}
	{	// Test 2 : Construction avec un paramètre de type unsigned int n
		Array<char>	tab(5);

		tab[0] = 'H';
		tab[1] = 'e';
		tab[2] = 'l';
		tab[3] = 'l';
		tab[4] = 'o';

		for (int i = 0; i < 5; i++)
			std::cout << "tab: " << tab[i] << std::endl;
	}
	{
		Array<char>	tab(5);
		Array<char>	tabCopy(tab);

		tab[0] = 'H';
		tab[1] = 'e';
		tab[2] = 'l';
		tab[3] = 'l';
		tab[4] = 'o';

		Array<char>	tabCopy2(tab);

		for (int i = 0; i < 5; i++)
			std::cout << "tab: " << tab[i] << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "tabCopy: " << tabCopy[i] << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "tabCopy2: " << tabCopy2[i] << std::endl;
		
		tabCopy[0] = 'W';
		tabCopy[1] = 'o';
		tabCopy[2] = 'r';
		tabCopy[3] = 'l';
		tabCopy[4] = 'd';

		for (int i = 0; i < 5; i++)
			std::cout << "tab: " << tab[i] << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "tabCopy: " << tabCopy[i] << std::endl;

	}
	return 0;
}
