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
#include <string>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) { return ; }

ShrubberyCreationForm::~ShrubberyCreationForm() { return ; }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) :
    AForm(src, "ShrubberyCreationForm") { return ; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {

   if (executor.executeForm(*this) == 0)
   {
     std::string buffer = executor.getName() + "_shrubbery.txt";
     std::ofstream fileTree(buffer, std::ios::app);
     if (fileTree.is_open())
        fileTree << "       _-_\\\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\ //  ~\n_- -  | | _- _ \n";
     fileTree.close();
   }
   return ;
}