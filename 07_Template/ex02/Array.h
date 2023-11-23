/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/23 14:26:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

template<typename Function>
void ident(Function target)
{
	std::cout << target << std::endl;
}

template<typename T, typename Function>
void iter(T *array, int length, Function f)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
        f(array[i]);
    }
    return ; 
}

#endif/* ************************************************** ARRAY_H */
