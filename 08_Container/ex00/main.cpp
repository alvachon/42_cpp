/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:15 by alvachon          #+#    #+#             */
/*   Updated: 2023/12/09 19:14:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.h"

int main( void )
{
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> d;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);

	try
	{
		std::cout << easyfind(v, 3) << std::endl;
		std::cout << easyfind(l, 3) << std::endl;
		std::cout << easyfind(d, 3) << std::endl;
		std::cout << easyfind(v, 5) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return 0;
}
