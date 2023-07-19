/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 13:27:09 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string.h>
#include "Weapon.h"

class HumanA {

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);

        void    attack();

    private:
        Weapon          &weapon_;
        std::string     name_;

};

#endif/* ************************************************** HUMANA_H */
