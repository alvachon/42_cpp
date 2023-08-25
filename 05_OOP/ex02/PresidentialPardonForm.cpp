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

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) { return ; }

PresidentialPardonForm::~PresidentialPardonForm() { return ; }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src) :
    AForm(src, "PresidentialPardonForm") { return ; }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {

   if (executor.executeForm(*this) == 0)
        std::cout << "Informe que la <target> a été pardonnée par Zaphod Beeblebrox." << std::endl;
   return ;
}