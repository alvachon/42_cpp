/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/30 19:45:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <string>

template<typename Function>
class MutantStack {

    public:
        MutantStack();
        virtual ~MutantStack();
        MutantStack(MutantStack & src, const std::string target);
        MutantStack& operator=(const MutantStack & rhs);

    private:
        MutantStack();
};

#endif/* ************************************************** MUTANTSTACK_H */
