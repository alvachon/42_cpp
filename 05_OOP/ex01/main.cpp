/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/09/07 08:42:33 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"

int main(void)
{
    {
      std::cout << std::endl << "\033[1;33mSIMPLE BUR & FORM\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 1);
          Form form("1", 1, 1);
          std::cout << bureaucrat << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
      std::cout << std::endl << "\033[1;33mTHROW TOO HIGH FORM\033[1;0m" << std::endl;
       try {
          Form form("1", -1, 1);
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
   {
      std::cout << std::endl << "\033[1;33mTHROW TOO HIGH FORM\033[1;0m" << std::endl;
       try {
          Form form("1", 1, -1);
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
   {
      std::cout << std::endl << "\033[1;33mTHROW TOO LOW FORM\033[1;0m" << std::endl;
       try {
          Form form("1", 151, 1);
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
   {
      std::cout << std::endl << "\033[1;33mTHROW TOO LOW FORM\033[1;0m" << std::endl;
       try {
          Form form("1", 1, 151);
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
      std::cout << std::endl << "\033[1;33mCOPY FORM\033[1;0m" << std::endl;
       try {
          Form form1("001", 1, 2);
          Form form2(form1, "002");
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
      std::cout << std::endl << "\033[1;33mSIMPLE VALID FORM\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 3);
          Form form1("001", 5, 2);
          std::cout << bureaucrat << std::endl;
          std::cout << form1 << std::endl;
          form1.beSigned(bureaucrat);
          std::cout << form1 << std::endl;

       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
   {
      std::cout << std::endl << "\033[1;33mINVALID SIGN THROW FORM\033[1;0m" << std::endl;
       try {
          Bureaucrat bureaucrat("Smith", 6);
          Form form1("001", 5, 2);
          std::cout << bureaucrat << std::endl;
          std::cout << form1 << std::endl;
          form1.beSigned(bureaucrat);
          std::cout << form1 << std::endl;

       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
   }
    return (0);
}
