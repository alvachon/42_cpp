/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/09/07 08:05:52 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string.h>
#include "Bureaucrat.h"

class Bureaucrat;

class Form {

    public:
        Form(const std::string name, int signedGrade, int exectGrade);
        ~Form();
        Form(Form & src, const std::string name);
        Form& operator=(const Form & rhs);

        const std::string &    getName(void) const;
        const int &            getSignedGrade(void) const;
        const int &            getExectGrade(void) const;
        const bool &           getInfo(void) const;
        void                   setSign(bool sign);
        void                   beSigned(const Bureaucrat& rhs);

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
        Form();

};

std::ostream& operator<<(std::ostream& o, const Form& rhs);


#endif/* ************************************************** FORM_H */
