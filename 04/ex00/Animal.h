/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/31 12:03:52 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string.h>
#include <stdio.h> //NULL

/*
Package Build : 
    1. get(); (public, static)
    2. count; (protected, static)


*/

class Ianimal    {

    private:

    protected:
        Ianimal(void);
        static int      interfaceCount;

    public:
        static Ianimal *getInterface(void);
        ~Ianimal(void);
        void           hello(void);

};

#endif/* ************************************************** ANIMAL_H */