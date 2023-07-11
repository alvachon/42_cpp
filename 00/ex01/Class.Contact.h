/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/11 12:42:34 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_H
# define CLASS_CONTACT_H

#include <iostream>
#include <string.h>

//Always private by default.
class Contact {

    public:
        const int   index;
        char        *firstName;
        char        *lastName;
        char        *nickname;
        char        *phoneNumber;
        char        *darkestSecret;

        Contact(const int i, char *e1, char *e2, char *e3, char *e4, char *e5);
        ~Contact(void);
};

#endif/* ************************************************** CLASS_CONTACT_H */