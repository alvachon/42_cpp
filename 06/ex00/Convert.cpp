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
#include <iomanip>

/*
If no conversion could be performed, an invalid_argument exception is thrown.
If the value read is out of the range of representable values by a double
(in some library implementations, this includes underflows),
an out_of_range exception is thrown.
*/


Convert::Convert(const std::string litteral) : litteral_(litteral) {

    if (getLitteral().size() != 0)
    {
        if (charLitteral() == true)
        {
            this->litType_ = "char";
            this->charVal_ = static_cast<int>(litteral[0]);
            this->intVal_ = static_cast<int>(litteral[0]);
            this->floatVal_ = static_cast<float>(getInt());
            this->doubleVal_ = static_cast<double>(getInt());
        }
        else if (floatLitteral() == true)
        {
            this->litType_ = "float";
            this->floatVal_ = std::stof(litteral, nullptr);
            this->doubleVal_ = static_cast<double>(getFloat());
            //
            this->charVal_ = static_cast<char>(getFloat());
            this->intVal_ = static_cast<int>(getFloat());
        }
        else if (pseudoLitteral() == true)
            this->litType_ = "pseudo";
        else if (intLitteral() == true)
        {
            this->litType_ = "int";
            this->intVal_ = std::stoi(litteral, nullptr, 10);
            this->floatVal_ = static_cast<float>(getInt());
            this->doubleVal_ = static_cast<double>(getInt());
            //
            this->charVal_ = static_cast<char>(getInt());
        }
        else if (doubleLitteral() == true)
        {
            this->litType_ = "double";
            this->doubleVal_ = std::stod(litteral, nullptr);
            //
            this->floatVal_ = static_cast<float>(getDouble());


        }
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

const std::string & Convert::getLitteral(void) const { return (this->litteral_); }
const std::string & Convert::getLitType(void) const { return (this->litType_); }

const char & Convert::getChar(void) const
{
    if (this->charVal_ > 31 && this->charVal_ < 127)
        return (this->charVal_);
    else if (this->charVal_ >= 0 && this->charVal_ <= 31 || this->charVal_ == 127)
    {
        std::cout << "Non displayable";
        return (this->charVal_);
    }
    std::cout << "impossible";
    return (this->charVal_);
}

const int & Convert::getInt(void) const { return (this->intVal_); }
const float & Convert::getFloat(void) const { return (this->floatVal_); }
const double & Convert::getDouble(void) const { return (this->doubleVal_); }

const bool Convert::charLitteral(void) const {

    if (getLitteral().size() == 1)
    {
            const char *str = getLitteral().c_str();
            if (str[0] > 31 && str[0] < 127)
            {
                if (str[0] >= 48 && str[0] <= 57)
                    return (false);
                return (true);
            }
            std::cout << (str[0]  - '0') << std::endl;
    }
    return (false);
}

const bool Convert::floatLitteral(void) const {

    std::string floatContent = "-0123456789.f";
    if (getLitteral().find_last_not_of(floatContent) != 0)
    {
        if (getLitteral().back() == 'f' && findMultiple('f') == false)
        {
            if (findMultiple('.') == false && findMultiple('-') == false)
                return (true);
        }
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

    std::string intContent = "-0123456789";
    if (getLitteral().find_last_not_of(intContent) != 0)
    {
        std::cout << "Have not find something else than 0123456789" << std::endl;
        return (true);
    }
    return (false);
}

const bool Convert::doubleLitteral(void) const {

    std::string doubleContent = "-0123456789.";
    if (getLitteral().find_last_not_of(doubleContent) == 0)
    {
        if (findMultiple('.') == false)
            return (true);
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

void Convert::convertChar(){//prom all the way
    return ;
}

void Convert::convertInt(){

    this->floatVal_ = static_cast<float>(getInt());
    this->doubleVal_ = static_cast<double>(getInt());
    return ;
}

void Convert::convertFloat(){
    return ;
}

void Convert::convertDouble(){

    this->intVal_ = static_cast<int>(getDouble());
    this->floatVal_ = static_cast<float>(getDouble());
    return ;
}

void Convert::convertPseudo(){

    return ;
}


//private
Convert::Convert() : litteral_("Convert") {

    std::cout << "Constructor from " << litteral_ << " \n";
    return ;
}

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Convert const & rhs) {

    ost << rhs.getLitteral() << " " << rhs.getLitType() << "\n" <<
    " Type : char\t" << rhs.getChar() << "\n" <<
    " Type : int\t" << rhs.getInt() << "\n" <<
    " Type : float\t" << std::setprecision(1) << std::fixed << rhs.getFloat() << "f\n" <<
    " Type : double\t" << rhs.getDouble();
    return (ost);
}


