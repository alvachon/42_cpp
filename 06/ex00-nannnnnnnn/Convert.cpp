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
#include <cerrno>

Convert::Convert(const std::string litteral) : litteral_(litteral) {

//  if litteral have content
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
            this->charVal_ = static_cast<char>(getFloat());
            this->intVal_ = static_cast<int>(getFloat());
           //Comment je fais pour pogner stof ??
        }
        else if (pseudoLitteral() == true)
        {
            this->litType_ = "pseudo";
            throw std::invalid_argument(litteral);
        }
        else if (intLitteral() == true)
        {
            this->litType_ = "int";
            this->intVal_ = std::stoi(litteral, nullptr, 10);
            this->floatVal_ = static_cast<float>(getInt());
            this->doubleVal_ = static_cast<double>(getInt());
            this->charVal_ = static_cast<char>(getInt());
        }
        else if (doubleLitteral() == true)
        {
            this->litType_ = "double";
            this->doubleVal_ = std::stod(litteral, nullptr);
            this->floatVal_ = static_cast<float>(getDouble());
            this->intVal_ = static_cast<int>(getDouble());
            this->charVal_ = static_cast<char>(getDouble());
        }
        else
            throw Convert::InvalidLitteral();
        return ;
    }
    throw Convert::InvalidLitteral();
}

Convert::~Convert() {return ; }
Convert::Convert(const Convert & src) { *this = src; return ; }
Convert& Convert::operator=(const Convert & rhs) { return (*this); }

const std::string & Convert::getLitteral(void) const { return (this->litteral_); }
const std::string & Convert::getLitType(void) const { return (this->litType_); }
const int & Convert::getInt(void) const { return (this->intVal_); }
const float & Convert::getFloat(void) const { return (this->floatVal_); }
const double & Convert::getDouble(void) const { return (this->doubleVal_); }

const char & Convert::getChar(void) const
{
    if (this->charVal_ > 31 && this->charVal_ < 127)
        return (this->charVal_);
    else if (this->charVal_ >= 0 && this->charVal_ <= 31 || this->charVal_ == 127)
        std::cout << "Non displayable";
    return (this->charVal_);
}

//Conditions to consider input string as a char
const bool Convert::charLitteral(void) const
{
//  if size of string is 1
    if (getLitteral().size() == 1)
    {
//          char conversion
        const char *str = getLitteral().c_str();
        if (str[0] > 31 && str[0] < 127)
        {
            if (str[0] >= 48 && str[0] <= 57)
                return (false);
            return (true);
        }
    }
    return (false);
}

const bool Convert::floatLitteral(void) const {

    std::string floatContent = "-0123456789.f";
    if (getLitteral().find_last_not_of(floatContent) == std::string::npos)
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
    if (getLitteral().find_last_not_of(intContent) == -1)
        return (true);
    return (false);
}

const bool Convert::doubleLitteral(void) const {

    std::string doubleContent = "-0123456789.";
    if (getLitteral().find_last_not_of(doubleContent) == -1)
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

//private
Convert::Convert() : litteral_("Convert") { return ; }

//print var info to stream
std::ostream & operator<<(std::ostream & ost, Convert const & rhs) {

    ost <<
    " Type : char\t" << rhs.getChar() << "\n" <<
    " Type : int\t" << rhs.getInt() << "\n" <<
    " Type : float\t" << std::setprecision(1) << std::fixed << rhs.getFloat() << "f\n" <<
    " Type : double\t" << rhs.getDouble();
    return (ost);
}


