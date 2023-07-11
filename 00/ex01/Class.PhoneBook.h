/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/11 11:14:31 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_H
# define CLASS_PHONEBOOK_H

#include <iostream>
#include <string.h>

//Always private by default.
class PhoneBook {

    public:
        const char  *add;
        const char  *search;
        const char  *exit;
        char        *cmd;

        PhoneBook(const char *cmd1, const char *cmd2, const char *cmd3);
        ~PhoneBook(void);

        void    enterProgram(void);
        void    verifyEntry();   
};

#endif/* ************************************************** CLASS_PHONEBOOK_H */
