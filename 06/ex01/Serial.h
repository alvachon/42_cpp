/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:56:59 by alvachon          #+#    #+#             */
/*   Updated: 2023/10/29 14:57:01 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_H
# define SERIAL_H

#include "Data.h"

class Serial {

    public:
        Serial();
        ~Serial();
        Serial(const Serial & src);
        Serial& operator=(const Serial & rhs);

        uintptr_t   serialize(Data *ptr);
        Data*       deserialize(uintptr_t raw);
};


#endif  /********************************************* SERIAL.H*/