/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/20 14:17:46 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(void)
{
    Harl    harl;

    harl.complain("ERROR");
    harl.complain("error");//not legit
    harl.complain("0");//not legit
    harl.complain("INFO");
    harl.complain("ERRORINFO");//not legit
    harl.complain("1ERROR");//not legit
    harl.complain("ERROR1");//not legit
    harl.complain("WARNING");
    harl.complain("ERROR");
    return (0);
}   