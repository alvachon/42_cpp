/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/24 15:58:14 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string.h>

//rhs : Right Hand Sign

class ClapTrap {

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& src, std::string name);
        ClapTrap& operator=(const ClapTrap& rhs);
        ~ClapTrap(void);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    private:
        std::string    name_;
        unsigned int   hitPts_;
        unsigned int   enerPts_;
        unsigned int   damage_;  

};

#endif/* ************************************************** CLAPTRAP_H */