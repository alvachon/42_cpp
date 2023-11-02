/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:00:01 by alvachon          #+#    #+#             */
/*   Updated: 2023/11/02 15:56:41 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

class Base {
    public:
        virtual int func () = 0;
        virtual ~Base() {};
    
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif /********************************************* BASE.H*/
