/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:40:44 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/23 14:36:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.h"

int main( void )
{
	int tableau[]			= {1, 2, 3};
	std::string arrStr[] 	= {"Hello", "World", "!"};

	iter(tableau, sizeof(tableau)/sizeof(int), ident<int>);
	iter(arrStr, sizeof(arrStr)/sizeof(std::string), ident<std::string>);

	return 0;
}
