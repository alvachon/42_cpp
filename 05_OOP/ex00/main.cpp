/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/24 09:42:55 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main(void)
{
    {
       try {//simple
          Bureaucrat bureaucrat("Smith", 1);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       try {//throw exception too high
          Bureaucrat bureaucrat("Smith", -1);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       try {//throw exception too low
          Bureaucrat bureaucrat("Smith", 151);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       try {//copy
          Bureaucrat bureaucrat("Smith", 1);
          Bureaucrat coworker(bureaucrat, "Gagnon");
          std::cout << bureaucrat << std::endl;
          std::cout << coworker << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       try {//simple promotion
          Bureaucrat bureaucrat("Smith", 5);
          std::cout << bureaucrat << std::endl;
          bureaucrat.promoteGrade(2);
          std::cout << bureaucrat << std::endl;

       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
       try {//simple demotion
          Bureaucrat bureaucrat("Smith", 5);
          std::cout << bureaucrat << std::endl;
          bureaucrat.demoteGrade(2);
          std::cout << bureaucrat << std::endl;

       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
       try {//throw exception promotion lvl too high (1)
          Bureaucrat bureaucrat("Smith", 150);
          std::cout << bureaucrat << std::endl;
          bureaucrat.promoteGrade(151);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
       try {//throw exception promotion grade + lvl too high (2)
          Bureaucrat bureaucrat("Smith", 1);
          std::cout << bureaucrat << std::endl;
          bureaucrat.promoteGrade(150);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
       try {//negative number (demote instead of promote)
          Bureaucrat bureaucrat("Smith", 10);
          std::cout << bureaucrat << std::endl;
          bureaucrat.promoteGrade(-10);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
      {
       try {//throw exception demotionlvl too high (1)
          Bureaucrat bureaucrat("Smith", 1);
          std::cout << bureaucrat << std::endl;
          bureaucrat.demoteGrade(150);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
       try {//throw exception promotion grade + lvl too high (2)
          Bureaucrat bureaucrat("Smith", 150);
          std::cout << bureaucrat << std::endl;
          bureaucrat.demoteGrade(1);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
       try {//negative number (Promote instead of demote)
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