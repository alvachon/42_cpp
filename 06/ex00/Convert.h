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
        /* Dans Convert, va determiner le type du litteral*/
        ~Convert();
        Convert(const Convert & src);
        Convert& operator=(const Convert & rhs);

        //emptyLitteral();
        const bool  charLitteral() const;
        // const bool  floatLitteral();
        // const bool  pseudoLitteral();
        // const bool  intLitteral();
        // const bool  doubleLitteral();

        const std::string     getLitteral(void) const;
        // int                   getGrade(void) const;
        // void                  promoteGrade(int lvl);
        // void                  demoteGrade(int lvl);

        //wrong, overflow, invalid
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw(){ return "Grade too high";}
        };

    protected:

    private:
        Convert();
        const         std::string   litteral_;//take pseudo
        const         std::string   litType_;
        bool          lock;
        char          charVal;
        int           intVal;
        float         floatVal;
        double        doubleVal;
        std::string   error;
};

std::ostream& operator<<(std::ostream& o, const Convert& rhs);


#endif/* ************************************************** CONVERT_H */
