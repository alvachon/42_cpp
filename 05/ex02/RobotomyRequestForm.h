/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

//formulaire de demande de robotomie
/*
Échelons requis : signature 72, exécution 45
Fait des bruits de perceuse. Ensuite, informe que la <target> a été robotomisée
avec succès 50% du temps. Dans le cas contraire, informe que l’opération a échoué.
*/

#include <iostream>
#include <string.h>
//#include "Bureaucrat.h"
#include "AForm.h"

//class Bureaucrat;

class RobotomyRequestForm : public virtual AForm {

    public:
        RobotomyRequestForm(const std::string name, int signedGrade, int exectGrade);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm & src, const std::string name);
        RobotomyRequestForm& operator=(const RobotomyRequestForm & rhs);

    private:
        RobotomyRequestForm();

};

#endif/* ************************************************** ROBOTOMYREQUESTFORM_H */
