/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 12:36:40 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string.h>
// #include <iomanip>
#include "Weapon.h"

class HumanA {

    public:
        HumanA(void);
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);

        void    attack();

    private:
        Weapon            &weapon_;
        std::string       name_;

};

#endif/* ************************************************** HUMANA_H */
