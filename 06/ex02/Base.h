/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:00:01 by alvachon          #+#    #+#             */
/*   Updated: 2023/10/29 15:21:39 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

class Base {
    public:
        virtual ~Base();

        Base*   generate(void);
        void    identify(Base* p);
        void    identify(Base& p);

    private:

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif /********************************************* BASE.H*/
