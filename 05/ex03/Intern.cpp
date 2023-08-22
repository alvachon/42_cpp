/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

Intern::Intern() {

    std::cout << "Constructor from  Intern\n";
    return ;
}

Intern::~Intern() {

    std::cout << " Destructor from Intern \n";
    return ;
}

Intern::Intern(Intern & src) {

    std::cout << " Constructor copy from Intern for Intern \n";
    *this = src;
    return ;
}

Intern& Intern::operator=(const Intern & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

AForm* Intern::makeForm(std::string formName, std::string formElem) {

    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == formName)
        {
            switch (i)
            {
                case 0:
                {
                    AForm* form = new PresidentialPardonForm(formElem);
                    return (form);
                }
                case 1:
                {
                    AForm* form = new RobotomyRequestForm(formElem);
                    return (form);
                }
                case 2:
                {
                    AForm* form = new ShrubberyCreationForm(formElem);
                    return (form);
                }
            }
        }
        /* else --> trow error*/
    }
    return (NULL);
}
