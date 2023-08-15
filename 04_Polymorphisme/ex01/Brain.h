/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 12:08:29 by alvachon         ###   ########.fr       */
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

    private:
        std::string         ideas_[100];
};

#endif/* ************************************************** BRAIN_H */