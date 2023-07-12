/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/12 12:53:59 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_H
# define CLASS_CONTACT_H

#include <iostream>
#include <string.h>

//Always private by default.
class Contact {

    public:
        int         index;
        std::string errEof;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

        Contact(void);
        ~Contact(void);

        void    addContact(int index);
        void    addInfo(std::string message);
};

#endif/* ************************************************** CLASS_CONTACT_H */