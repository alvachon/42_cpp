/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:22:35 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/18 13:43:18 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


void    randomChump(std::string name)   {

    Zombie  specStackFt(name);
    specStackFt.announce();
    return ;
}