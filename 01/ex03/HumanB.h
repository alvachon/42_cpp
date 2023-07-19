/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 14:13:29 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string.h>
#include "Weapon.h"

class HumanB {

    public:
        HumanB(std::string name);
        ~HumanB(void);

        void    attack();
        void    setWeapon(Weapon &weapon);

    private:
        Weapon          *weapon_;
        std::string     name_;
};

#endif/* ************************************************** HUMANB_H*/