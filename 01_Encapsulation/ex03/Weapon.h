/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 14:13:29 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string.h>

class Weapon {

    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);

        const std::string& getType(void);
        const void         setType(std::string type);

    private:
        std::string type_;
};

#endif/* ************************************************** WEAPON_H*/