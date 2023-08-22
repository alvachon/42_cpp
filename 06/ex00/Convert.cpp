/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.h"

Convert::Convert(const std::string litteral) : litteral_(litteral) {

    // if (grade < 1)
    //     throw Convert::GradeTooHighException();
    // if (grade > 150)
    //     throw Convert::GradeTooLowException();
    // else
        std::cout << " Constructor from " << litteral_ << " \n";
   return ;
}

Convert::~Convert() {

    std::cout << " Destructor from " << litteral_ << " \n";
    return ;
}

Convert::Convert(Convert & src){

    std::cout << " Constructor copy from " << litteral_ << " \n";
    *this = src;
    return ;
}

Convert& Convert::operator=(const Convert & rhs) {

    // if (this != &rhs)
    // {
    //     this->grade_ = getGrade();
    // }
    std::cout << " Operator = called \n";
    return (*this);
}

// const std::string Convert::getName(void) const {

//     return (this->litteral_);
// }

// int Convert::getGrade(void) const {

//     return (this->grade_);
// }

// void Convert::promoteGrade(int lvl) {

//     if (lvl < 1)
//         throw Convert::GradeTooHighException();
//     else if ((grade_ - lvl) < 1)
//         throw Convert::GradeTooHighException();
//     else
//         this->grade_ -= lvl;
//    return ;
// }

// void Convert::demoteGrade(int lvl) {

//     if (lvl > 150)
//         throw Convert::GradeTooLowException();
//     else if ((grade_ + lvl) > 150)
//         throw Convert::GradeTooLowException();
//     else
//         this->grade_ += lvl;
// }

//private
Convert::Convert() : litteral_("Convert") {

    std::cout << "Constructor from " << litteral_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Convert const & rhs) {

    // ost << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return (ost);
}


