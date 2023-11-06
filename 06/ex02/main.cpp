/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:15:06 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/06 15:26:22 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"
#include <iostream>
#include <locale.h>

Base*   generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 1)
        return (new A());
    else if (i == 2)
        return (new B());
    else
        return (new C());
};

void    identify(Base* p){
if (dynamic_cast<A *>(p))
    std:: cout << " is A" << std::endl;
else if (dynamic_cast<B *>(p))
    std:: cout << " is B" << std::endl;
else if (dynamic_cast<C *>(p))
    std:: cout << " is C" << std::endl;
else
    std:: cout << "ERROR" << std::endl;
};

void    identify(Base& p){
if (dynamic_cast<A *>(&p))
    std:: cout << " is A" << std::endl;
else if (dynamic_cast<B *>(&p))
    std:: cout << " is B" << std::endl;
else if (dynamic_cast<C *>(&p))
    std:: cout << " is C" << std::endl;
else
    std:: cout << "ERROR" << std::endl;
};

int main (void)
{
    Base *b = generate();
    identify(b);
    identify(* b);
    
    delete b;
};