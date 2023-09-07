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
#include "AForm.h"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name), grade_(grade) {

    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
         std::cout << " Constructor Bureaucrat " << name_ << ": " << grade_ << " \n";
   return ;
}

Bureaucrat::~Bureaucrat() {

     std::cout << " Destructor from Bureaucrat " << name_ << " \n";
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat & src, const std::string name) : name_(name), grade_(src.grade_) {

    std::cout << " Constructor copy Bureaucrat " << name_ << ": " << grade_ << " \n";
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & rhs) {

    if (this != &rhs)
    {
        this->grade_ = getGrade();
    }
    std::cout << " Operator = called \n";
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

void Bureaucrat::signForm(AForm &form) const {

    form.setSign(true);
    if (form.getInfo() == true)
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    else
        throw std::invalid_argument(" > Error at signform() ");
}

void Bureaucrat::executeForm(AForm const &form) const {

    if (form.getInfo() == true && this->getGrade() == form.getExectGrade())
    {
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    else
    {
        std::cerr << "At executeForm(): Can't execute." << std::endl;
        throw AForm::GradeTooLowException();
    }
}

//private
Bureaucrat::Bureaucrat() : name_("Bureaucrat") {

    std::cout << "Constructor from " << name_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Bureaucrat const & rhs) {

    ost << "\tPrint: " << rhs.getName() << " Bureaucrate :" << rhs.getGrade();
    return (ost);
}


