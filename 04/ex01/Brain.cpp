/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 12:15:24 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Brain.h"

Brain::Brain() { return ; }

Brain::~Brain() { return ; }

Brain::Brain(Brain & ref) { *this = ref; return ; }

Brain & Brain::operator=(Brain const & rhs) {

    if (this != &rhs) {

        for (int i = 0; i< 100; i++)
            this->ideas_[i] = rhs.ideas_[i];
    }
    return (*this);
}
