/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:40:44 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/16 14:43:59 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.h"

void	ident(int element)
{
	std::cout << element << std::endl;
}

int main( void )
{
	int tableau[4] = {1, 2, 3};

	iter(tableau, sizeof(tableau), ident(tableau[0]));
	return 0;
}
