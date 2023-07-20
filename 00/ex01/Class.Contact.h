/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/19 12:31:38 by alvachon         ###   ########.fr       */
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
        Contact(void);
        ~Contact(void);

        void                addContact(int index);
        void                addInfo(std::string message);
        void                infoContact(void);
        void                printContact(std::string f, std::string l, std::string n);
        void                printer(std::string print, int limit);
        const std::string   getFirstName(void);
        const std::string   getLastName(void);
        const std::string   getNickname(void);

    private:
        int index;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif/* ************************************************** CLASS_CONTACT_H */