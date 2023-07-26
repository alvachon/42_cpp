/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 15:13:13 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string.h>


class Animal {

    public:
        Animal(void);
        Animal(const Animal& src);
        Animal& operator=(const Animal& rhs);
        ~Animal(void);

        //const ft;

    protected:
        std::string    type_;

    private:
        std::string    class_;

};

#endif/* ************************************************** ANIMAL_H */