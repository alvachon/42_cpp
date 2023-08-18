/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/17 15:21:00 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"
#include "AForm.h"

//formulaire de pardon présidentiel)
/*
Échelons requis : signature 25, exécution 5
Informe que la <target> a été pardonnée par Zaphod Beeblebrox.
*/

PresidentialPardonForm::PresidentialPardonForm(const std::string name, int signedGrade, int exectGrade) :
    AForm("PresidentialPardonForm", 25, 5) { return ; }

PresidentialPardonForm::~PresidentialPardonForm() { std::cout << " Destructor from " << AForm::getName() << " \n";
    return ; }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src, const std::string name) :
    AForm(src, name) { return ; }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

//private
PresidentialPardonForm::PresidentialPardonForm() : AForm() {
    std::cout << "Constructor from " << AForm::getName() << " \n";
    return ;
}
