/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/13 14:13:35 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_H
# define CLASS_CONTACT_H

#include <iostream>
#include <string.h>
#include <iomanip>

//Always private by default.
class Contact {

    public:
        int         index;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

        Contact(void);
        ~Contact(void);

        void    addContact(int index);
        void    addInfo(std::string message);
        void    printContact(std::string f, std::string l, std::string n);
        void    printer(std::string print);
};

#endif/* ************************************************** CLASS_CONTACT_H */