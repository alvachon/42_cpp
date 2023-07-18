/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/18 12:15:27 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <new>

//  void    randomChump(std::string name);//randomChump.cpp

//Always private by default.
class Zombie {

    public:
        Zombie(void);//zombie.cpp
        Zombie(std::string name);
        ~Zombie(void);//zombie.cpp

        void    announce(void); //zombie.cpp
        //Zombie*  newZombie(std::string name);//newZombie.cpp

    private:
         std::string name_; //zombie.cpp
};

#endif/* ************************************************** ZOMBIE_H */