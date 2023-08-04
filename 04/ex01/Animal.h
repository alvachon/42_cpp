/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string.h>
#include "Brain.h"

class Animal {

    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(Animal & src);
        Animal& operator=(Animal const & rhs);

        virtual void       makeSound(void) const;
        std::string        getType(void) const;
        void               setType(std::string type);

    protected:
        std::string         type_;

    private:

};

#endif/* ************************************************** ANIMAL_H */