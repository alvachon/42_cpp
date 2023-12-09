/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/12/09 19:45:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

class Span {

    public:
        Span(unsigned int N);
        ~Span();
        Span(Span & src, unsigned int N);
        Span& operator=(const Span & rhs);

        void addNumber(unsigned int N);
        int shortestSpan(void);
        int longestSpan(void);

    private:
        Span();
        unsigned int     _N;
        std::vector<int> _v;
};

#endif/* ************************************************** SPAN_H */
