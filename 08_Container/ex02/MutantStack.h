/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/12/09 20:32:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <string>
#include <stack>
#include <iterator>
#include <algorithm>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>{

    public:
        MutantStack() : std::stack<T>() {}
        ~MutantStack() {}
        MutantStack(MutantStack const & src) : std::stack<T>(src) {}
        MutantStack& operator=(const MutantStack & rhs) { std::stack<T>::operator=(rhs); return *this; }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return std::stack<T>::c.begin(); }
        iterator end() { return std::stack<T>::c.end(); }

};



#endif/* ************************************************** MUTANTSTACK_H */
