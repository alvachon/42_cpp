/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:15:06 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/06 14:22:09 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <locale.h>

Base*   generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    std:: cout << i << std::endl;
    if (i == 1)
    {
        std:: cout << " new A()" << std::endl;
        return (new A());
    }
    else if (i == 2)
    {
        std:: cout << " new B()" << std::endl;
        return (new B());
    }
    else
    {
        std:: cout << " new C()" << std::endl;
        return (new C());
    }
};

void    identify(Base* p){

};

void    identify(Base& p){

};

int main (void)
{
    Base *b = generate();
    delete b;
    std:: cout << "Base * b() deleted" << std::endl;    
};