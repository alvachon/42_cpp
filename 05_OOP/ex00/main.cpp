/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/10/20 10:17:07 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main(void)
{
    {
      std::cout << std::endl << "\033[1;33mSIMPLE BUR\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 1);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       std::cout << std::endl<< "\033[1;33mTHROW TOO HIGH\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", -1);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
      std::cout << std::endl<< "\033[1;33mTHROW TOO LOW\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 151);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
      std::cout << std::endl<< "\033[1;33mCOPY BUR\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 1);
          Bureaucrat coworker(bureaucrat, "Gagnon");
          std::cout << bureaucrat << std::endl;
          std::cout << coworker << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
      std::cout << std::endl << "\033[1;33mSIMPLE PROMOTION\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 5);
          std::cout << bureaucrat << std::endl;
          bureaucrat.promoteGrade(2);
          std::cout << bureaucrat << std::endl;

       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
      std::cout << std::endl<< "\033[1;33mSIMPLE DEMOTION\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 5);
          std::cout << bureaucrat << std::endl;
          bureaucrat.demoteGrade(2);
          std::cout << bureaucrat << std::endl;

       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
      std::cout << std::endl << "\033[1;33mTHROW PROMO TOO HIGH (1)\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 150);
          std::cout << bureaucrat << std::endl;
          bureaucrat.promoteGrade(151);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
      std::cout << std::endl << "\033[1;33mTHROW PROMO TOO HIGH (2)\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 1);
          std::cout << bureaucrat << std::endl;
          bureaucrat.promoteGrade(150);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
      std::cout << std::endl << "\033[1;33mDEMOTE WITH NEGATIVE NUMBERS\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 10);
          std::cout << bureaucrat << std::endl;
          bureaucrat.promoteGrade(-10);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
      {
      std::cout << std::endl << "\033[1;33mTHROW DEMOTE LVL TOO LOW (1)\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 1);
          std::cout << bureaucrat << std::endl;
          bureaucrat.demoteGrade(150);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
      std::cout << std::endl << "\033[1;33mTHROW DEMOTE LVL TOO LOW (2)\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 150);
          std::cout << bureaucrat << std::endl;
          bureaucrat.demoteGrade(1);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
      std::cout << std::endl << "\033[1;33mPROMOTE WITH NEGATIVE NUMBERS\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 150);
          std::cout << bureaucrat << std::endl;
          bureaucrat.demoteGrade(-2);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
    return (0);
}
