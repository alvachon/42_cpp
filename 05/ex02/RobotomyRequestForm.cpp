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
//formulaire de demande de robotomie
/*
Échelons requis : signature 72, exécution 45
Fait des bruits de perceuse. Ensuite, informe que la <target> a été robotomisée
avec succès 50% du temps. Dans le cas contraire, informe que l’opération a échoué.
*/

RobotomyRequestForm::RobotomyRequestForm(const std::string name, int signedGrade, int exectGrade) :
    AForm("RobotomyRequestForm", 72, 45) { return ; }

RobotomyRequestForm::~RobotomyRequestForm() { std::cout << " Destructor from " << AForm::getName() << " \n";
    return ; }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src, const std::string name) :
    AForm(src, name) { return ; }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

//private
RobotomyRequestForm::RobotomyRequestForm() : AForm() {
    std::cout << "Constructor from " << AForm::getName() << " \n";
    return ;
}
