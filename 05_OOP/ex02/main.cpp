/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/25 15:09:41 by alvachon         ###   ########.fr       */
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
   // {
   //    AForm *p = 0;
   //    try
   //    {//working workflow -- ShrubberyCreationForm
   //       Bureaucrat executor("Smith", 137);
   //       Bureaucrat secretary("Roberge", 145);
   //       std::cout << executor << std::endl;
   //       std::cout << secretary << std::endl;

   //       p = new ShrubberyCreationForm();
   //       std::cout << *p << std::endl;
  
   //       p->beSigned(secretary);
   //       p->execute(executor);
   //    } 
   //    catch (std::exception &e)
   //    {
   //       std::cout << e.what() << std::endl;
   //    }
   //    delete p;
   // }
   // {
   //    AForm *p = 0;
   //    try
   //    {//working workflow -- RobotomyRequestForm
   //       Bureaucrat executor("Smith", 45);
   //       Bureaucrat secretary("Roberge", 72);
   //       std::cout << executor << std::endl;
   //       std::cout << secretary << std::endl;

   //       p = new RobotomyRequestForm();
   //       std::cout << *p << std::endl;
  
   //       p->beSigned(secretary);
   //       p->execute(executor);
   //    } 
   //    catch (std::exception &e)
   //    {
   //       std::cout << e.what() << std::endl;
   //    }
   //    delete p;
   //  }
   // {
   //    AForm *p = 0;
   //    try
   //    {//working workflow -- PresidentialPardonForm
   //       Bureaucrat executor("Smith", 5);
   //       Bureaucrat secretary("Roberge", 25);
   //       std::cout << executor << std::endl;
   //       std::cout << secretary << std::endl;

   //       p = new PresidentialPardonForm();
   //       std::cout << *p << std::endl;
  
   //       p->beSigned(secretary);
   //       p->execute(executor);
   //    } 
   //    catch (std::exception &e)
   //    {
   //       std::cout << e.what() << std::endl;
   //    }
   //    delete p;
   //  }
   // {
   //    AForm *p = 0;
   //    try
   //    {  //secretary can't sign the presidential
   //       Bureaucrat executor("Smith", 5);
   //       Bureaucrat secretary("Roberge", 26);
   //       std::cout << executor << std::endl;
   //       std::cout << secretary << std::endl;

   //       p = new PresidentialPardonForm();
   //       std::cout << *p << std::endl;
  
   //       p->beSigned(secretary);
   //       p->execute(executor);
   //    } 
   //    catch (std::exception &e)
   //    {
   //       std::cout << e.what() << std::endl;
   //    }
   //    delete p;
   // }
   {
      AForm *p = 0;
      try
      {  //executor can't
         Bureaucrat executor("Smith", 6);
         Bureaucrat secretary("Roberge", 25);
         std::cout << executor << std::endl;
         std::cout << secretary << std::endl;

         p = new PresidentialPardonForm();
         std::cout << *p << std::endl;
  
         p->beSigned(secretary);
         p->execute(executor);
      } 
      catch (std::exception &e)
      {
         std::cout << e.what() << std::endl;
      }
      delete p;
   }
    return (0);
}