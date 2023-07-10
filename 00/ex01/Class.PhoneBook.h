/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/10 14:57:04 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_H
# define CLASS_PHONEBOOK_H

#include <iostream>

//Always private by default.
class PhoneBook {

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        std::string cmd;

        void    enterProgram(void);
        void    verifyEntry(std::string input);
    
};

#endif/* ************************************************** CLASS_PHONEBOOK_H */
