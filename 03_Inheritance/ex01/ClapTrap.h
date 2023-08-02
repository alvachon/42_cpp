/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 13:02:17 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string.h>

class ClapTrap {

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& src, std::string name);
        ClapTrap& operator=(const ClapTrap& rhs);
        ~ClapTrap(void);

        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);


    protected:
        std::string    name_;
        unsigned int   hitPts_;
        unsigned int   enerPts_;
        unsigned int   damage_;
    
        void    attack(const std::string& target);

    private:
        std::string         class_;

};

#endif/* ************************************************** CLAPTRAP_H */