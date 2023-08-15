/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name), grade_(grade) {

    if (grade < 0)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        std::cout << " Constructor from " << name_ << " for " << grade_ << " \n";
   return ;
}

Bureaucrat::~Bureaucrat() {

    std::cout << " Destructor from " << name_ << " \n";
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat & src) {

    std::cout << " Constructor from copy " << name_ << " \n";
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & rhs) {

    if (this != &rhs)
    {
        //getgrade ft
    }
    std::cout << " Operator " << name_ << " \n";
    return (*this);
}

const std::string Bureaucrat::getName(void){

    return (this->name_);
}

int Bureaucrat::getGrade(void) {

    return (this->grade_);
}

void Bureaucrat::promoteGrade(int lvl) {

    if (lvl < 0)
        throw Bureaucrat::GradeTooHighException();
    else if ((grade - lvl) < 0)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade -= lvl;
   return ;
}

void Bureaucrat::demoteGrade(int lvl) {

    if (lvl > 150)
        throw Bureaucrat::GradeTooLowException();
    else if ((grade + lvl) > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade += lvl;
}

//private
Bureaucrat::Bureaucrat() : name_("Bureaucrat") {

    std::cout << "Constructor from " << name_ << " \n";
    return ;
}


