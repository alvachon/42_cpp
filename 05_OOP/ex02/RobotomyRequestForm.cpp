/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/17 15:21:00 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"
#include "AForm.h"
#include <string>
#include <iostream>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm(target, 72, 45) { return ; }

RobotomyRequestForm::~RobotomyRequestForm() { return ; }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src, const std::string target) : AForm(src, target) { return ; }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {

   srand(time(0));
   executor.executeForm(*this);
   if ((rand() % 2) + 1 == 2)
   {
      std::string file = "Electric-Drill.mp3";
      std::ifstream musicFile(file);
      if (musicFile)
      {
         if (musicFile.is_open())
         {
            system("afplay Electric-Drill.mp3");
            std::cout << this->getName() << " succeed robotomisation at 1/2 chance rate." << std::endl;
         }
      }
      else
      {
         std::cerr <<  "Failed: Can't access the file" << std::endl;
         throw std::invalid_argument(" > Error at RobotomyRequestForm::execute();");
      }
   }
   else
   {
      std::cerr <<  "Failed: entered 1/2 rate failed system. " << std::endl;
      throw std::invalid_argument(" > Error at RobotomyRequestForm::execute();");
   }
   return ;
}
