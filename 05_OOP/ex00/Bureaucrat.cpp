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

    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        std::cout << "Constructor from " << name_ << ": " << grade_ << std::endl;
   return ;
}

Bureaucrat::~Bureaucrat() {

    std::cout << "Destructor from " << name_  << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat & src, const std::string name) : name_(name), grade_(src.grade_) {

    std::cout << "Constructor copy from " << name_ << ": " << grade_ << std::endl;
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & rhs) {

    if (this != &rhs)
    {
        this->grade_ = getGrade();
    }
    std::cout << "Operator = called" << std::endl;
    return (*this);
}

const std::string & Bureaucrat::getName(void) const {

    return (this->name_);
}

const int & Bureaucrat::getGrade(void) const {

    return (this->grade_);
}

void Bureaucrat::promoteGrade(int lvl) {

    if (lvl < 1)
        throw Bureaucrat::GradeTooHighException();
    else if ((grade_ - lvl) < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade_ -= lvl;
   return ;
}

void Bureaucrat::demoteGrade(int lvl) {

    if (lvl > 150)
        throw Bureaucrat::GradeTooLowException();
    else if ((grade_ + lvl) > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade_ += lvl;
}

//private
Bureaucrat::Bureaucrat() : name_("Bureaucrat") {

    std::cout << "Constructor from " << name_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Bureaucrat const & rhs) {

    ost << "\t" << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
    return (ost);
}


