/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string.h>
#include "AForm.h"

class AForm;

class Bureaucrat {

    public:
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat & src, const std::string name);
        Bureaucrat& operator=(const Bureaucrat & rhs);

        const std::string &   getName(void) const;
        const int &           getGrade(void) const;
        void                  promoteGrade(int lvl);
        void                  demoteGrade(int lvl);
        void                  signForm(AForm &form) const;
        void                  executeForm(AForm const &form) const;


        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw(){ return "Catch : Grade too high";}
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw(){ return "Catch : Grade too low";}
        };

    protected:

    private:
        const         std::string   name_;
        int           grade_;
        Bureaucrat();

};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);


#endif/* ************************************************** BUREAUCRAT_H */
