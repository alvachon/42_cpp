/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.h"

Serial::Serial(const std::string litteral) : litteral_(litteral) {

    // if (grade < 1)
    //     throw Serial::GradeTooHighException();
    // if (grade > 150)
    //     throw Serial::GradeTooLowException();
    // else
        std::cout << " Constructor from " << litteral_ << " \n";
   return ;
}

Serial::~Serial() {

    std::cout << " Destructor from " << litteral_ << " \n";
    return ;
}

Serial::Serial(Serial & src){

    std::cout << " Constructor copy from " << litteral_ << " \n";
    *this = src;
    return ;
}

Serial& Serial::operator=(const Serial & rhs) {

    // if (this != &rhs)
    // {
    //     this->grade_ = getGrade();
    // }
    std::cout << " Operator = called \n";
    return (*this);
}

// const std::string Serial::getName(void) const {

//     return (this->litteral_);
// }

// int Serial::getGrade(void) const {

//     return (this->grade_);
// }

// void Serial::promoteGrade(int lvl) {

//     if (lvl < 1)
//         throw Serial::GradeTooHighException();
//     else if ((grade_ - lvl) < 1)
//         throw Serial::GradeTooHighException();
//     else
//         this->grade_ -= lvl;
//    return ;
// }

// void Serial::demoteGrade(int lvl) {

//     if (lvl > 150)
//         throw Serial::GradeTooLowException();
//     else if ((grade_ + lvl) > 150)
//         throw Serial::GradeTooLowException();
//     else
//         this->grade_ += lvl;
// }

//private
Serial::Serial() : litteral_("Serial") {

    std::cout << "Constructor from " << litteral_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Serial const & rhs) {

    // ost << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return (ost);
}


