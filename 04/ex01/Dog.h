/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 12:39:15 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string.h>
#include "Animal.h"

class Dog: public Animal {

    public:
        Dog();
        ~Dog();
        Dog(Dog & src);
        Dog & operator=(Dog const & rhs);
        
        virtual void      makeSound(void) const;
        void              setBrain(void) ;
    
    protected:

    private:
        Brain              *brain_;
};

#endif/* ************************************************** DOG_H */