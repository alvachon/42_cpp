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
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm & src);
        PresidentialPardonForm& operator=(const PresidentialPardonForm & rhs);
};

#endif/* ************************************************** PRESIDENTIALPARDONFORM_H */
