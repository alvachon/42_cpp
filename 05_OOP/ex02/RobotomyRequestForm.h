/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <string.h>
#include "AForm.h"

class RobotomyRequestForm : public virtual AForm {

    public:
        RobotomyRequestForm(const std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm & src, const std::string target);
        RobotomyRequestForm& operator=(const RobotomyRequestForm & rhs);

        virtual void    execute(const Bureaucrat& executor) const;
};

#endif/* ************************************************** ROBOTOMYREQUESTFORM_H */
