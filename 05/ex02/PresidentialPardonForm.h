/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

//formulaire de pardon présidentiel)
/*
Échelons requis : signature 25, exécution 5
Informe que la <target> a été pardonnée par Zaphod Beeblebrox.
*/

#include <iostream>
#include <string.h>
//#include "Bureaucrat.h"
#include "AForm.h"

//class Bureaucrat;

class PresidentialPardonForm : public virtual AForm {

    public:
        PresidentialPardonForm(const std::string name, int signedGrade, int exectGrade);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm & src, const std::string name);
        PresidentialPardonForm& operator=(const PresidentialPardonForm & rhs);

    private:
        PresidentialPardonForm();
};

#endif/* ************************************************** PRESIDENTIALPARDONFORM_H */