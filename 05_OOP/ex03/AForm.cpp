/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/09/04 12:57:53 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"

AForm::AForm(const std::string name, int signedGrade, int exectGrade) :
    name_(name), signedGrade_(signedGrade), exectGrade_(exectGrade), signed_(0) {

    if ((signedGrade < 1) || (exectGrade < 1))
        throw AForm::GradeTooHighException();
    if ((signedGrade > 150) || (exectGrade > 150))
        throw AForm::GradeTooLowException();
    else
        std::cout << " Constructor Form: " << name_ << std::endl;
   return ;
}

AForm::~AForm() {

    std::cout << " Destructor Form: " << name_ << std::endl;
    return ;
}

AForm::AForm(AForm & src, const std::string name) :
 name_(name), signedGrade_(src.signedGrade_), exectGrade_(src.exectGrade_), signed_(0) {

    std::cout << " Constructor copy Form: " << name_ << std::endl;
    *this = src;
    return ;
}

AForm& AForm::operator=(const AForm & rhs) {  std::cout << " Operator = called \n";
    return (*this);
}

//private
AForm::AForm() : name_("AForm"), signedGrade_(150), exectGrade_(150), signed_(0) {

    std::cout << "Constructor from " << name_ << " \n";
    return ;
}

void AForm::execute(const Bureaucrat& executor) const {

    executor.executeForm(*this);
   return ;
}

void AForm::beSigned(const Bureaucrat& rhs) {

    if (rhs.getGrade() > this->getSignedGrade())
    {
        std::cerr << "At beSigned(): Can't sign." << std::endl;
        throw AForm::GradeTooLowException();
    }
    else
        rhs.signForm(*this);
   return ;
}

const std::string & AForm::getName(void) const { return (this->name_); }

const int & AForm::getSignedGrade(void) const { return (this->signedGrade_); }

const int & AForm::getExectGrade(void) const { return (this->exectGrade_); }

const bool & AForm::getInfo(void) const { return (this->signed_);}

void AForm::setSign(bool sign) { this->signed_ = sign; return ; }

//print var info to stream
std::ostream & operator<<(std::ostream & ost, AForm const & rhs) {

    ost << "\tPrint:\n\tAForm name :\t" << rhs.getName() << "\n"
    << "\tSigned :\t" << rhs.getInfo() << "\n"
    << "\tSigned Grade :\t" << rhs.getSignedGrade() << "\n"
    << "\tExec Grade :\t"<< rhs.getExectGrade();
    return (ost);
}
