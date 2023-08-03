/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/03 15:43:27 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string.h>
#include "Animal.h"

class Brain {

    public:
        Brain();
        ~Brain();
        Brain(Brain & src);
        Brain & operator=(Brain const & rhs);
    
    protected:
        std::string         ideas_[100];

    private:
};

#endif/* ************************************************** BRAIN_H */