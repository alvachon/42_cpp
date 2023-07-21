/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/21 14:35:27 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string.h>

//rhs : Right Hand Sign

class ClapTrap {

    public:
        ClapTrap(std::string name);//Default Constructor
        ClapTrap(ClapTrap const & src);//Copy Constructor
        ~ClapTrap(void);//Destructor
        ClapTrap& operator=(const ClapTrap& rhs);//Assignation Constructor

        // const int& getSome(void) const;
        // void       setSome(const int raw);

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