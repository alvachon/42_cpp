/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 12:30:40 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string.h>
#include "ClapTrap.h"

//rhs : Right Hand Sign

class ScavTrap : public ClapTrap {

    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& src, std::string name);
        ScavTrap& operator=(const ScavTrap& rhs);
        ~ScavTrap(void);

        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    attack(const std::string& target);
        void    guardGate(void);

    private:
        std::string         class_;
        bool                gate_;

};

#endif/* ************************************************** SCAVTRAP_H */