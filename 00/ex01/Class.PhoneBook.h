/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/12 13:54:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_H
# define CLASS_PHONEBOOK_H

#include <iostream>
#include <string.h>
#include "Class.Contact.h"

//Always private by default.
class PhoneBook {

    public:
        std::string cmd;
        std::string add;
        std::string search;
        std::string exitCmd;
        Contact     contact[8];

        PhoneBook(void);
        ~PhoneBook(void);

        void    verifyEntry();
        void    listContact();
    
};

#endif/* ************************************************** CLASS_PHONEBOOK_H */
