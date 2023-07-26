/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 15:10:57 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(void) : class_("Animal") {

    std::cout << "Default constructor " << this->class_ << " called\n";
    return ;
}

Animal::~Animal(void) {

    std::cout << "Destructor " << this->class_ << " called\n";
    return ;
}

Animal::Animal(const Animal& src) : class_("Animal") {

    std::cout << "Copy Constructor " << this->class_ << " called\n";
    return ;
}

Animal& Animal::operator=(const Animal& rhs) {
    
    std::cout << "Copy assignement operator " << this->class_ << " called\n";
    return (*this);
}