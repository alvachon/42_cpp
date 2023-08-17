/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/17 15:21:00 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

AForm::AForm(const std::string name, int signedGrade, int exectGrade) :
    name_(name), signedGrade_(signedGrade), exectGrade_(exectGrade), signed_(0) {

    if ((signedGrade < 1) || (exectGrade < 1))
        throw AForm::GradeTooHighException();
    if ((signedGrade > 150) || (exectGrade > 150))
        throw AForm::GradeTooLowException();
    else
        std::cout << " Constructor from " << name_ << " form is not signed \n";
   return ;
}

AForm::~AForm() {

    std::cout << " Destructor from " << name_ << " \n";
    return ;
}

AForm::AForm(AForm & src, const std::string name) :
 name_(name), signedGrade_(src.signedGrade_), exectGrade_(src.exectGrade_), signed_(0) {

    std::cout << " Constructor copy from " << name_ << " form is not signed \n";
    *this = src;
    return ;
}

AForm& AForm::operator=(const AForm & rhs) {

    std::cout << " Operator = called \n";
    return (*this);
}

const std::string AForm::getName(void) const {

    return (this->name_);
}

const int AForm::getSignedGrade(void) const {

    return (this->signedGrade_);
}

const int AForm::getExectGrade(void) const {

    return (this->exectGrade_);
}

const bool AForm::getInfo(void) const {

    return (this->signed_);
}

void AForm::beSigned(const Bureaucrat& rhs) {

    if (rhs.getGrade() > this->getSignedGrade())
    {
        rhs.signForm(*this);
        throw AForm::GradeTooLowException();
    }
    else
    {
        this->signed_ = 1;
        rhs.signForm(*this);
    }
   return ;
}

//private
AForm::AForm() : name_("AForm"), signedGrade_(150), exectGrade_(150), signed_(0) {

    std::cout << "Constructor from " << name_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, AForm const & rhs) {

    ost << " AForm name :\t" << rhs.getName() << "\n" 
    << " Signed :\t" << rhs.getInfo() << "\n"
    << " Signed Grade :\t" << rhs.getSignedGrade() << "\n"
    << " Exec Grade :\t"<< rhs.getExectGrade() << "\n- - - - -";
    return (ost);
}


