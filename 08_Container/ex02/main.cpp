/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:40:44 by alvachon          #+#    #+#             */
/*   Updated: 2023/12/09 21:59:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.h"

int main( void )
{
	MutantStack<int> mstack;

	mstack.push(5);
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "----------------" << std::endl;

	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "----------------" << std::endl;


	mstack.pop();
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "----------------" << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
return 0;
}
