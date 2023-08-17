/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string.h>
#include "Bureaucrat.h"

class Bureaucrat;

class AForm {

    public:
        AForm(const std::string name, int signedGrade, int exectGrade);
        virtual ~AForm() = 0;
        AForm(AForm & src, const std::string name);
        AForm& operator=(const AForm & rhs);

        const std::string     getName(void) const;
        const int             getSignedGrade(void) const;
        const int             getExectGrade(void) const;
        const bool            getInfo(void) const;
        virtual void          beSigned(const Bureaucrat& rhs) = 0;
        
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw(){ return "Grade too high";}
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw(){ return "Grade too low";}
        };

    protected:

    private:
        const std::string   name_;
        const int           signedGrade_;
        const int           exectGrade_;
        bool                signed_;
        AForm();

};

std::ostream& operator<<(std::ostream& o, const AForm& rhs);


#endif/* ************************************************** FORM_H */
