/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/18 12:31:38 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main(void)
{
    {
       try {//simple Form
          PresidentialPardonForm p;
          std::cout << p << std::endl;
          RobotomyRequestForm r;
          std::cout << r << std::endl;
          ShrubberyCreationForm s;
          std::cout << s << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
   //  {
   //     try {//simple
   //        Bureaucrat bureaucrat("Smith", 1);
   //        Form form("1", 1, 1);
   //        std::cout << bureaucrat << std::endl;
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   //  }
   //  {
   //     try {//throw exception too high
   //        Form form("1", -1, 1);
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   //  }
   // {
   //     try {//throw exception too high
   //        Form form("1", 1, -1);
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   //  }
   // {
   //     try {//throw exception too low
   //        Form form("1", 151, 1);
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   //  }
   // {
   //     try {//throw exception too low
   //        Form form("1", 1, 151);
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   //  }
   //  {
   //     try {//copy
   //        Form form1("001", 1, 2);
   //        Form form2(form1, "002");
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   //  }
   //  {
   //     try {//simple validation
   //        Bureaucrat bureaucrat("Smith", 3);
   //        AForm form1("001", 5, 2);
   //        std::cout << bureaucrat << std::endl;
   //        std::cout << form1 << std::endl;
   //        form1.beSigned(bureaucrat);
   //        std::cout << form1 << std::endl;

   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
   // {
   //     try {//simple invalidation
   //        Bureaucrat bureaucrat("Smith", 6);
   //        AForm form1("001", 5, 2);
   //        std::cout << bureaucrat << std::endl;
   //        std::cout << form1 << std::endl;
   //        form1.beSigned(bureaucrat);
   //        std::cout << form1 << std::endl;

   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
   // {
   //     try {//simple demotion
   //        Bureaucrat bureaucrat("Smith", 5);
   //        std::cout << bureaucrat << std::endl;
   //        bureaucrat.demoteGrade(2);
   //        std::cout << bureaucrat << std::endl;

   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
   // {
   //     try {//throw exception promotion lvl too high (1)
   //        Bureaucrat bureaucrat("Smith", 150);
   //        std::cout << bureaucrat << std::endl;
   //        bureaucrat.promoteGrade(151);
   //        std::cout << bureaucrat << std::endl;
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
   // {
   //     try {//throw exception promotion grade + lvl too high (2)
   //        Bureaucrat bureaucrat("Smith", 1);
   //        std::cout << bureaucrat << std::endl;
   //        bureaucrat.promoteGrade(150);
   //        std::cout << bureaucrat << std::endl;
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
   // {
   //     try {//negative number (demote instead of promote)
   //        Bureaucrat bureaucrat("Smith", 10);
   //        std::cout << bureaucrat << std::endl;
   //        bureaucrat.promoteGrade(-10);
   //        std::cout << bureaucrat << std::endl;
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
   //    {
   //     try {//throw exception demotionlvl too high (1)
   //        Bureaucrat bureaucrat("Smith", 1);
   //        std::cout << bureaucrat << std::endl;
   //        bureaucrat.demoteGrade(150);
   //        std::cout << bureaucrat << std::endl;
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
   // {
   //     try {//throw exception promotion grade + lvl too high (2)
   //        Bureaucrat bureaucrat("Smith", 150);
   //        std::cout << bureaucrat << std::endl;
   //        bureaucrat.demoteGrade(1);
   //        std::cout << bureaucrat << std::endl;
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
   // {
   //     try {//negative number (Promote instead of demote)
   //        Bureaucrat bureaucrat("Smith", 150);
   //        std::cout << bureaucrat << std::endl;
   //        bureaucrat.demoteGrade(-2);
   //        std::cout << bureaucrat << std::endl;
   //     }   catch (std::exception &e) {
   //             std::cout << e.what() << std::endl;
   //     }
   // }
    return (0);
}