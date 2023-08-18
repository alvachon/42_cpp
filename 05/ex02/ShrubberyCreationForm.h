/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

/*
Échelons requis : signature 145, exécution 137
Créé un fichier <target>_shrubbery dans le répertoire courant, et écrit des arbres
ASCII à l’intérieur.
*/

#include <iostream>
#include <string.h>
//#include "Bureaucrat.h"
#include "AForm.h"

//class Bureaucrat;

class ShrubberyCreationForm : public virtual AForm {

    public:
        ShrubberyCreationForm(const std::string name, int signedGrade, int exectGrade);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm & src, const std::string name);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm & rhs);

    private:
        ShrubberyCreationForm();

};

#endif/* ************************************************** SHRUBBERYCREATIONFORM_H */
