/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/09/07 08:39:33 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

Form::Form(const std::string name, int signedGrade, int exectGrade) :
    name_(name), signedGrade_(signedGrade), exectGrade_(exectGrade), signed_(0) {

    if ((signedGrade < 1) || (exectGrade < 1))
        throw Form::GradeTooHighException();
    if ((signedGrade > 150) || (exectGrade > 150))
        throw Form::GradeTooLowException();
    std::cout << "CONSTRUCT FORM " << name_ << std::endl;
    return ;
}

Form::~Form() {

    std::cout << "DESTRUCT FORM " << name_ << std::endl;
    return ;
}

Form::Form(Form & src, const std::string name) :
 name_(name), signedGrade_(src.signedGrade_), exectGrade_(src.exectGrade_), signed_(0) {

    std::cout << "COPY FORM " << name_ << std::endl;
    *this = src;
    return ;
}

Form& Form::operator=(const Form & rhs) {

    std::cout << " Operator = called \n";
    return (*this);
}

const std::string & Form::getName(void) const { return (this->name_);}

const int & Form::getSignedGrade(void) const { return (this->signedGrade_);}

const int & Form::getExectGrade(void) const { return (this->exectGrade_);}

const bool & Form::getInfo(void) const { return (this->signed_);}

void Form::setSign(bool sign) {this->signed_ = sign; return ;}

void Form::beSigned(const Bureaucrat& rhs) {

    if (rhs.getGrade() > this->getSignedGrade())
    {
        std::cerr << "At beSigned(): Can't sign." << std::endl;
        throw Form::GradeTooLowException();
    }
    rhs.signForm(*this);
   return ;
}

//private
Form::Form() : name_("Form"), signedGrade_(150), exectGrade_(150), signed_(0) {

    std::cout << "Constructor from " << name_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Form const & rhs) {

    ost << "\n Form name :\t" << rhs.getName() << "\n"
    << " Signed :\t" << rhs.getInfo() << "\n"
    << " Signed Grade :\t" << rhs.getSignedGrade() << "\n"
    << " Exec Grade :\t"<< rhs.getExectGrade() << "\n- - - - -";
    return (ost);
}


