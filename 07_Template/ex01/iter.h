/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/23 14:43:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string>

class iter {

    public:
        iter(const std::string target);
        virtual ~iter();
        iter(iter & src, const std::string target);
        iter& operator=(const iter & rhs);

    private:
        iter();
};

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

#endif/* ************************************************** ITER_H */
