/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/03 14:21:22 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string.h>

class Animal {

    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(Animal & src);
        Animal& operator=(Animal const & rhs);

        virtual void       makeSound(void) const;
        const std::string& getType(void) const;

    protected:
        std::string         type_;

    private:

};

#endif/* ************************************************** ANIMAL_H */