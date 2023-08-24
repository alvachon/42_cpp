/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/24 11:10:48 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.h"

int main(int ac, char **av)
{
    {
      if (ac != 2)
         exit(1);
      {
         try
         {
            Convert arg(av[1]);
         }
         catch (std::exception &e)
         {
            std::cout << e.what() << std::endl;
         }
      }
   }
   return (0);
}
