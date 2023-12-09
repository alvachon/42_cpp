/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/12/09 19:13:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

/*class easyfind {

    public:
        easyfind(const std::string target);
        virtual ~easyfind();
        easyfind(easyfind & src, const std::string target);
        easyfind& operator=(const easyfind & rhs);

    private:
        easyfind();
};*/

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
