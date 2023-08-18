/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/17 15:21:00 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"
#include "AForm.h"
//formulaire de création d’arbustes
/*
Échelons requis : signature 145, exécution 137
Créé un fichier <target>_shrubbery dans le répertoire courant, et écrit des arbres
ASCII à l’intérieur.
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) { return ; }

ShrubberyCreationForm::~ShrubberyCreationForm() { return ; }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) :
    AForm(src, "ShrubberyCreationForm") { return ; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}