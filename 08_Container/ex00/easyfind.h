/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/30 19:46:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>

class easyfind {

    public:
        easyfind(const std::string target);
        virtual ~easyfind();
        easyfind(easyfind & src, const std::string target);
        easyfind& operator=(const easyfind & rhs);

    private:
        easyfind();
};


#endif/* ************************************************** EASYFIND_H */
