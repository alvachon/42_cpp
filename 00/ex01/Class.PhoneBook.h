/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/17 14:47:44 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_H
# define CLASS_PHONEBOOK_H

#include <iostream>
#include <string.h>
#include <iomanip>
#include "Class.Contact.h"

//Always private by default.
class PhoneBook {

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void    verifyEntry();
        void    listContact();
        void    headerContact();
        void    selectContact();
    
    private:
        Contact     contact[8];
        std::string add;
        std::string search;
        std::string exitCmd;

        std::string cmd;
};

#endif/* ************************************************** CLASS_PHONEBOOK_H */
