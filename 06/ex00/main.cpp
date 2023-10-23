/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/10/21 14:28:21 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.h"
#include <stdexcept>

/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0

./convert nan
char: impossible
int: impossible
float: nanf
double: nan

./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/

int main(int ac, char **av)
{
    {
      if (ac != 2)
         return (1);
      {
         try
         {
            Convert arg(av[1]);
            std::cout << arg << std::endl;
         }
         catch (Convert::InvalidLitteral d)
         {
//          standard error
            std::cout << d.what() << std::endl;
         }
         catch (std::exception &e)
         {
            std::string err = e.what();
            if (err.compare("stoi: out of range") == 0)
               std::cout << "Error : Out of Range" << std::endl;
            else
               std::cout << "Type : char\timpossible\nType : int\timpossible\nType : float\t" << e.what() << "f\nType : double\t" << e.what() << std::endl;
         }
      }
   }
   return (0);
}
