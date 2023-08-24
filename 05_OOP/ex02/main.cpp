/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/24 11:36:34 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

/*
presidential pardon: 25, 5
robotomy request: 72, 45
shrubbery creation :145, 137
*/

int main(void)
{
       {
       try {//working workflow
          Bureaucrat executor("Smith", 137);
          Bureaucrat secretary("Roberge", 145);
          std::cout << executor << std::endl;
          std::cout << secretary << std::endl;

          AForm *p = new ShrubberyCreationForm();
          std::cout << *p << std::endl;

          p->beSigned(secretary);
          p->execute(executor);
          delete p;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
       {
       try {//working workflow
          Bureaucrat executor("Smith", 72);
          Bureaucrat secretary("Roberge", 45);
          std::cout << executor << std::endl;
          std::cout << secretary << std::endl;

          AForm *p = new RobotomyRequestForm();
          std::cout << *p << std::endl;

          p->beSigned(secretary);
          p->execute(executor);
          delete p;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
   {
       try {//secretary can't sign the presidential
          Bureaucrat executor("Smith", 5);
          Bureaucrat secretary("Roberge", 26);
          std::cout << executor << std::endl;
          std::cout << secretary << std::endl;

          AForm *p = new PresidentialPardonForm();
          std::cout << *p << std::endl;

          p->beSigned(secretary);
          p->execute(executor);
         delete p;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
   {
       try {//executor can't execute the presidential
          Bureaucrat executor("Smith", 6);
          Bureaucrat secretary("Roberge", 25);
          std::cout << executor << std::endl;
          std::cout << secretary << std::endl;

          AForm *p = new PresidentialPardonForm();
          std::cout << *p << std::endl;

          p->beSigned(secretary);
          p->execute(executor);
          delete p;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       try {//simple Form
          AForm *p = new PresidentialPardonForm();
          std::cout << *p << std::endl;
          AForm *r = new RobotomyRequestForm();
          std::cout << *r << std::endl;
          AForm *s = new ShrubberyCreationForm();
          std::cout << *s << std::endl;
          delete p;
          delete r;
          delete s;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    return (0);
}