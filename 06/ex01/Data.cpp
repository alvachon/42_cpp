/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

Data::Data(struct holder s) : s_(s) {

    // if (grade < 1)
    //     throw Data::GradeTooHighException();
    // if (grade > 150)
    //     throw Data::GradeTooLowException();
    // else
        std::cout << " Constructor from " << s_ << " \n";
   return ;
}

Data::~Data() {

    std::cout << " Destructor from " << litteral_ << " \n";
    return ;
}

Data::Data(Data & src){

    std::cout << " Constructor copy from " << litteral_ << " \n";
    *this = src;
    return ;
}

Data& Data::operator=(const Data & rhs) {

    // if (this != &rhs)
    // {
    //     this->grade_ = getGrade();
    // }
    std::cout << " Operator = called \n";
    return (*this);
}


uintptr_t   Data::serialize(Data* ptr)
{
    std::cout << "Hello" << std::endl;
//  reinterpret pointeur sur objet data, mais pas la data dedans ...
    return (reinterpret_cast<std::uintptr_t>(&ptr));
}

//private
Data::Data() : litteral_("Data") {

    std::cout << "Constructor from " << litteral_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Data const & rhs) {

    // ost << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return (ost);
}


