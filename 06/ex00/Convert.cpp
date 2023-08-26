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

/* Dans Convert, va determiner le type du litteral

char = correspond charte ascci et 1 unite
pseudo = correspond charte asccii, ref directe.

int =  entre 0-9, pas de point
double = entre 0-9, avec point

float = entte 0-9, dernier char == f et contient un point.

*/
/*
    stf::string pseudo[3] = "-inf, +inf, nan"
    this->lock = 0;
    if (litteral.str() > 1)
    {
        if (litteral.allnum() == 0)
        {
            if (litteral.dot() == 0)
                this->type = double;
        }
        else if (litteral.find("abcd...") == 0)
        {
          for (int i = 0;, i < 3; i++)
          {
              if (this->lock = 1 && litteral.compare(pseudo[i]) == 0)
                  throw Convert::invalid("Too many calls");
              else if (litteral.compare(pseudo[i]) == 0 && this->lock == 0)
              {
                  this->lock = 1;
                  this->type = pseudo[i];
              }
          }
        }
        else
            throw Convert::invalid("Not a litteral");
    }
*/

const bool Convert::charLitteral(void) const {

    if ((getLitteral().size()) == 1)
        return (true);
    return (false);
}

// const bool Convert::floatLitteral(void) const {

//     if ()
//         return (true);
//     return (false);
// }

// const bool Convert::pseudoLitteral(void) const {

//     if ()
//         return (true);
//     return (false);
// }

// const bool Convert::intLitteral(void) const {

//     if ()
//         return (true);
//     return (false);
// }

// const bool Convert::doubleLitteral(void) const {

//     if ()
//         return (true);
//     return (false);
// }


Convert::Convert(const std::string litteral) : litteral_(litteral) {


    // if (grade < 1)
    //     throw Convert::GradeTooHighException();
    if (charLitteral() == false)
        std::cout << " Not a char" << std::endl;
    else
        std::cout << " Constructor from " << litteral_ << " \n";
   return ;
}

Convert::~Convert() {

    std::cout << " Destructor from " << litteral_ << " \n";
    return ;
}

Convert::Convert(const Convert & src){

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

const std::string Convert::getLitteral(void) const {

    return (this->litteral_);
}

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


