/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/15 11:05:52 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main(void)
{
    {
       try {
          Bureaucrat bureaucrat("Smith", 1);
          std::cout << bureaucrat.getName() << " " << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       try {
          Bureaucrat bureaucrat("Smith", -1);
          std::cout << bureaucrat.getName() << " " << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       try {
          Bureaucrat bureaucrat("Smith", 151);
          std::cout << bureaucrat.getName() << " " << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    {
       try {
          Bureaucrat bureaucrat("Smith", 1);
          Bureaucrat coworker(bureaucrat);
          std::cout << bureaucrat.getName() << " " << std::endl;
          std::cout << coworker.getName() << " " << std::endl;
       }   catch (std::exception &e) {
               std::cout << e.what() << std::endl;
       }
    }
    return (0);
}

//en copie

