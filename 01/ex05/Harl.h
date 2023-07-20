/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/20 14:13:44 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string.h>

class Harl {

    public:
        Harl(void);
        ~Harl(void);

        void    complain(std::string level);
        void    getFunc(int niv);

    private:

        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

};

#endif/* ************************************************** HARL_H */
