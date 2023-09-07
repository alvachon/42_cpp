/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/09/07 08:53:39 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"

AForm::AForm(const std::string target, int signedGrade, int exectGrade) :
    name_(target), signedGrade_(signedGrade), exectGrade_(exectGrade), signed_(0) {

    if ((signedGrade < 1) || (exectGrade < 1))
        throw AForm::GradeTooHighException();
    if ((signedGrade > 150) || (exectGrade > 150))
        throw AForm::GradeTooLowException();
    else
        std::cout << "CONSTRUCT FORM FOR " << name_ << std::endl;
   return ;
}

AForm::~AForm() {

    std::cout << "DESTRUCT FORM FOR " << name_ << std::endl;
    return ;
}

AForm::AForm(AForm & src, const std::string target) :
 name_(target), signedGrade_(src.signedGrade_), exectGrade_(src.exectGrade_), signed_(0) {

    std::cout << "COPY FORM FOR " << name_ << " form is not signed \n";
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

    ost << " AForm target :\t" << rhs.getName() << "\n"
    << " Signed :\t" << rhs.getInfo() << "\n"
    << " Signed Grade :\t" << rhs.getSignedGrade() << "\n"
    << " Exec Grade :\t"<< rhs.getExectGrade() << "\n- - - - -";
    return (ost);
}
