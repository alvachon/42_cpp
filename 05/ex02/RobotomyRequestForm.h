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
#include "AForm.h"

class RobotomyRequestForm : public virtual AForm {

    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm & src);
        RobotomyRequestForm& operator=(const RobotomyRequestForm & rhs);
};

#endif/* ************************************************** ROBOTOMYREQUESTFORM_H */
