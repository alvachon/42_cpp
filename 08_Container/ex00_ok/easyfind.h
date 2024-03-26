/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2024/03/26 19:04:43 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template <typename T>
int easyfind(T &container, int target)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), target);
    if (it != container.end())
        return (*it);
    else
        throw std::exception();
}


#endif/* ************************************************** EASYFIND_H */
