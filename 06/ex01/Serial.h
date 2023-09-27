/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/09/22 10:17:28 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_H
# define SERIAL_H

#include <iostream>
#include <string.h>

// struct Data {
//     //var membre 1
//     //var membre 2
// }

class Serial {

    public:
        Serial(const std::string litteral);
        ~Serial();
        Serial(Serial & src);
        Serial& operator=(const Serial & rhs);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw(){ return "- - - - - ";}
        };

        //Take in to convert
        uintptr_t   serialize(Data* ptr);
        Data*       deserialize(uintptr_t raw);
;

    protected:

    private:
        Serial();
        const         std::string   litteral_;
        //int           intVal;
        //float         floatVal;
        //double        doubleVal;
        //std::string   error;
};

std::ostream& operator<<(std::ostream& o, const Serial& rhs);


#endif/* ************************************************** SERIAL_H */
