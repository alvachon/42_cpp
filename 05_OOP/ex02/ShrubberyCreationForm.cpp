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
#include <sstream>
#include "AForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) { return ; }

ShrubberyCreationForm::~ShrubberyCreationForm() { return ; }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) :
    AForm(src, "ShrubberyCreationForm") { return ; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {

   FILE *fileTree;
   std::ostringstream buffer;
   buffer << this->getName() << "_shrubbery.txt";
   std::string fileName = buffer.str();
   
   buffer << "           \/ |    |/\n        \/ / \||/  /_/___/_\n         \/   |/ \/\n    _\__\_\   |  /_____/_\n" <<
   "           \  | /          /\n  __ _-----`  |{,-----------~\n            \ }{\n             }{{\n             }}{" <<
   "             {{}\n       , -=-~{ .-^- _\n  ejm        `}\n              {\n   \n";
   std::string treeAscii = buffer.str();

   fileTree = fopen(fileName, "a");
   fprintf(fileTree, treeAscii);
   fclose(fileTree);
   executor.executeForm(*this);
   return ;
}