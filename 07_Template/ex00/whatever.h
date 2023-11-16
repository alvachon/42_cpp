/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/16 11:03:34 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

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
