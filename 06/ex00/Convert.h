/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string.h>

class Convert {

    public:
        Convert(const std::string litteral);
        ~Convert();
        Convert(Convert & src);
        Convert& operator=(const Convert & rhs);

        // const std::string     getName(void) const;
        // int                   getGrade(void) const; 
        // void                  promoteGrade(int lvl);
        // void                  demoteGrade(int lvl);
        
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw(){ return "Grade too high";}
        };
        // class GradeTooLowException : public std::exception {
        //     public:
        //         virtual const char *what() const throw(){ return "Grade too low";}
        // };

    protected:

    private:
        Convert();
        const         std::string   litteral_;
        int           intVal;
        float         floatVal;
        double        doubleVal;
        std::string   error;
};

std::ostream& operator<<(std::ostream& o, const Convert& rhs);


#endif/* ************************************************** CONVERT_H */
