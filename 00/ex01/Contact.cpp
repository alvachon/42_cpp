/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:41:05 by alvachon          #+#    #+#             */
/*   Updated: 2023/05/31 14:46:52 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

Ex01::Contact::Contact(void) {
    std::cout << "Object Constructor \tCONTACT\n";
    return ;
}

Ex01::Contact::~Contact(void) {
    std::cout << "Object Destructor \tCONTACT\n";
    return ;
}
