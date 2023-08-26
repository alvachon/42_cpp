/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/26 14:15:28 by alvachon         ###   ########.fr       */
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
            std::cout << arg << std::endl;
         }
         catch (std::exception &e)
         {
            std::cout << e.what() << std::endl;
         }
      }
   }
   return (0);
}
