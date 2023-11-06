/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/06 15:26:16 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.h"

int main(void)
{
	Serial	s;
	Data *ptr = new Data;
	ptr->x = 1;
	ptr->y = 2;
	ptr->c = 'a';
	ptr->b = true;
	std::cout << ptr << std::endl;

	std::uintptr_t raw = s.serialize(ptr);
	std::cout << raw << std::endl;

	ptr = s.deserialize(raw);
	std::cout << ptr << std::endl;

	std::cout << ptr->x << std::endl;
	std::cout << ptr->y << std::endl;
	std::cout << ptr->c << std::endl;
	std::cout << ptr->b << std::endl;

	delete ptr;
    return (0);
}
