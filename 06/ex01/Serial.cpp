/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:56:56 by alvachon          #+#    #+#             */
/*   Updated: 2023/10/29 14:57:03 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.h"
#include "Data.h"

Serial::Serial(){ std::cout << "Construct" << std::endl;    return ; }
Serial::~Serial() { std::cout << "Destruct" << std::endl;    return ; }
Serial::Serial(const Serial & src) { *this = src; return ; }
Serial& Serial::operator=(const Serial & rhs) { return (*this); }

uintptr_t  Serial::serialize(Data *ptr)
{
    return (reinterpret_cast<std::uintptr_t>(&*ptr));
}

Data*  Serial::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
