/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <string.h>
#include "AForm.h"

class PresidentialPardonForm : public virtual AForm {

    public:
        PresidentialPardonForm(const std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm & src, const std::string target);
        PresidentialPardonForm& operator=(const PresidentialPardonForm & rhs);

        virtual void    execute(const Bureaucrat& executor) const;
};

#endif/* ************************************************** PRESIDENTIALPARDONFORM_H */
