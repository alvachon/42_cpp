/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/23 14:45:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

class whatever {

    public:
        whatever(const std::string target);
        virtual ~whatever();
        whatever(whatever & src, const std::string target);
        whatever& operator=(const whatever & rhs);

    private:
        whatever();
};

template< typename T>
const T &		max (const T & x, const T & y) {return ((x>y) ? x : y);}

template< typename T>
const T &		min (const T & x, const T & y) {return ((x<y) ? x : y);}

template< typename T>
void			swap(T & x, T & y)
{
	T t;
	t = x;
	x = y;
	y = t;
	return ;
}


#endif/* ************************************************** WHATEVER_H */
