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

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) { return ; }

RobotomyRequestForm::~RobotomyRequestForm() { return ; }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : AForm(src, "RobotomyRequestForm") { return ; }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) {
    std::cout << " Operator = called \n";
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {

   srand(time(0));
   /*will throw an error bf for execution if signataire and exec not good enought,
   then AFTER if rand fail, return an error for 1/2 chance*/
   if (executor.executeForm(*this) == 0 && ((rand() % 2) + 1 == 2))
      system("open Electric-Drill.mp3");
   else
   {
      std::cerr << "1/2 chance failed." << std::endl;
      throw std::exception();// a revoir
   }
   return ;
}
