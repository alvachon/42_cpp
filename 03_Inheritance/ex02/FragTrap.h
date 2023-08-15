/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 13:05:29 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string.h>
#include "ClapTrap.h"

class FragTrap : public ClapTrap {

    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap& src, std::string name);
        FragTrap& operator=(const FragTrap& rhs);
        ~FragTrap(void);

        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    attack(const std::string& target);
        void    highFivesGuys(void);

    private:
        std::string         class_;

};

#endif/* ************************************************** FRAGTRAP_H */