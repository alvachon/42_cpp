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

    std::cout << "CONSTRUCT Intern" << std::endl;
    return ;
}

Intern::~Intern() {

    std::cout << "DESTRUCT Intern" << std::endl;
    return ;
}

Intern::Intern(Intern & src) {

    std::cout << "COPY Intern\n";
    *this = src;
    return ;
}

Intern& Intern::operator=(const Intern & rhs) {
    std::cout << "Operator = called \n";
    return (*this);
}

AForm*   Intern::makePresidential(std::string target) { return (new PresidentialPardonForm(target)); }
AForm*   Intern::makeRobotomy(std::string target){ return (new RobotomyRequestForm(target)); }
AForm*   Intern::makeShrubbery(std::string target){ return (new ShrubberyCreationForm(target)); }


AForm* Intern::makeForm(const std::string formName, const std::string target) {

    std::string forms[3] =
        {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* (Intern::*f[3])(std::string) =
        {&Intern::makePresidential, &Intern::makeRobotomy, &Intern::makeShrubbery};

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == formName)
            return((this->*f[i])(target));
    }
    std::cerr << "Form Asked was not found" << std::endl;
    throw std::invalid_argument(" > Error at makeform()");
    return (NULL);
}
