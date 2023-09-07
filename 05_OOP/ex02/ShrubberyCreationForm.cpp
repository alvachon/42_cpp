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

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm(target, 145, 137) { return ; }

ShrubberyCreationForm::~ShrubberyCreationForm() { return ; }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src, const std::string target) :
    AForm(src, target) { return ; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {

    executor.executeForm(*this);
     std::string buffer = this->getName() + "_shrubbery.txt";
     std::ofstream fileTree(buffer, std::ios::app);
     if (fileTree)
     {
        if (fileTree.is_open())
        {
            fileTree << "       _-_\\\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\ //  ~\n_- -  | | _- _ \n";
            fileTree.close();
        }
     }
     else
     {
        std::cerr << "FAILED: Can't access the file." << std::endl;
        throw std::invalid_argument(" > Error at ShrubberyCreationForm::execute(); ");
     }
     return;
}
