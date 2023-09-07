/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/09/07 12:56:08 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string.h>
#include "AForm.h"

class AForm;

class Intern {

    public:
        Intern();
        ~Intern();
        Intern(Intern & src);
        Intern& operator=(const Intern & rhs);

        AForm* makeForm(std::string target, std::string formElem);

};

#endif/* ************************************************** INTERN_H */
