/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/17 15:21:00 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"
#include "AForm.h"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) { return ; }

RobotomyRequestForm::~RobotomyRequestForm() { return ; }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : AForm(src, "RobotomyRequestForm") { return ; }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {

    std::cout << "Fait des bruits de perceuse. Ensuite, informe que la <target> a été robotomisée avec succès 50% du temps.
     Dans le cas contraire, informe que l’opération a échoué." << std::endl;
/*
    system.electricdrill
*/

   executor.executeForm(*this);
   return ;
}
