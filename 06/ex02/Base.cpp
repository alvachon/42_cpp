/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:00:07 by alvachon          #+#    #+#             */
/*   Updated: 2023/10/29 15:23:45 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.h"

Base*   Base::generate(void)
{
    //might need to change place for that
    int i = (rand() + 1) / 3;
    std::cout << i << std::endl;
    return (new Base);

};

void    Base::identify(Base* p){

};

void    Base::identify(Base& p){

};
