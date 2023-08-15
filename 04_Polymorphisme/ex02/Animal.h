/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/08 11:27:13 by alvachon         ###   ########.fr       */
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
        virtual ~Animal() = 0;
        Animal(Animal & src);
        Animal& operator=(Animal const & rhs);

        virtual void       makeSound(void) const = 0;
        std::string        getType(void) const;
        void               setType(std::string type);

    protected:
        std::string         type_;

    private:

};

#endif/* ************************************************** ANIMAL_H */