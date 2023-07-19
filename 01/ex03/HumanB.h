/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 11:13:55 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string.h>
// #include <iomanip>
// #include "Weapon.h"

class HumanB {

    public:
        HumanB(void);
//        HumanB(Weapon *weaponType);
        ~HumanB(void);

        void    attack();//const ?

    private:
//        Weapon      *weaponType;
//        std::string name_;
};

#endif/* ************************************************** HUMANB_H*/