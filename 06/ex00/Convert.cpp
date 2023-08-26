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

    if (getLitteral().size() != 0)
    {
        if (charLitteral() == true)
            this->litType_ = "char";
        else if (floatLitteral() == true)
            this->litType_ = "float";
        else if (pseudoLitteral() == true)
            this->litType_ = "pseudo";
        else if (intLitteral() == true)
            this->litType_ = "int";
        else if (doubleLitteral() == true)
            this->litType_ = "double";
        else
            throw Convert::InvalidLitteral();
        std::cout << " Constructor from " << litteral_ << " \n";
        return ;
    }
    throw Convert::InvalidLitteral();
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
    std::cout << " Operator = called \n";
    return (*this);
}

const std::string Convert::getLitteral(void) const {
    return (this->litteral_);
}

const std::string Convert::getLitType(void) const {
    return (this->litType_);
}

const bool Convert::charLitteral(void) const {

    if ((getLitteral().size()) == 1)
        return (true);
    return (false);
}

const bool Convert::floatLitteral(void) const {

    std::string floatContent = "0123456789.f";
    if (getLitteral().find_last_not_of(floatContent) != 0)
    {
        if (getLitteral().back() == 'f' && findMultiple('f') == false)
        {
            if (findMultiple('.') == false)
                return (true);
        }
    }
    return (false);
}

const bool Convert::findMultiple(const char c) const {

    std::size_t pos = getLitteral().find(c, 0);
    if (pos != std::string::npos)
    {
        pos = getLitteral().find(c, pos + 1);
        if (pos != std::string::npos)
            return (true);
    }
    return (false);
}

const bool Convert::pseudoLitteral(void) const {

  const std::string pseudo[3] = { "-inf", "+inf", "nan"};
  for (int i = 0; i < 3; i++)
  {
    if (getLitteral().compare(pseudo[i]) == 0)
        return (true);
  }
    return (false);
}

const bool Convert::intLitteral(void) const {

    std::string intContent = "0123456789";
    if (getLitteral().find_last_not_of(intContent) == 0)
    {
        std::cout << "Have not find something else than 0123456789" << std::endl;
        return (true);
    }
    return (false);
}

const bool Convert::doubleLitteral(void) const {

    std::string doubleContent = "0123456789.";
    if (getLitteral().find_last_not_of(doubleContent) == 0)
    {
        if (findMultiple('.') == false)
            return (true);
    }
    return (false);
}

//private
Convert::Convert() : litteral_("Convert") {

    std::cout << "Constructor from " << litteral_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Convert const & rhs) {

     ost << rhs.getLitteral() << " " << rhs.getLitType();
    return (ost);
}


