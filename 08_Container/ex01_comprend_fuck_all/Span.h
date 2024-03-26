/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2024/03/26 19:05:57 by alvachon         ###   ########.fr       */
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
