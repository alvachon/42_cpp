/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:15:06 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/02 15:56:41 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.h"
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <locale.h>

Base*   generate(void)
{
    //might need to change place for that
    int i = (rand() + 1) / 3;
    std::cout << i << std::endl;
    return (new Base);

};

void    identify(Base* p){

};

void    identify(Base& p){

};

int main (void)
{
    Base *b = generate();
    delete b;
};