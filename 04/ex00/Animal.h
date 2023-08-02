/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/02 10:49:16 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string.h>
#include <stdio.h> //NULL

//abstract

class Ianimal    {

    private:

    protected:
        Ianimal(void);
        static int      interfaceCount;

    public:
        static Ianimal *getInterface(void);
        virtual ~Ianimal(void);
        void           hello(void);
};

#endif/* ************************************************** ANIMAL_H */