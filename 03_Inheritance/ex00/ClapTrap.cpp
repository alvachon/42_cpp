/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/21 14:35:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) :
    name_(name), hitPts_(10), enerPts_(10), damage_(0) {

    std::cout << "Default constructor called\n";
    return ;
}

ClapTrap::~ClapTrap(void) {

    std::cout << "Destructor called\n";
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
    std::cout << "Copy Constructor called\n";
    *this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)   {
    
    std::cout << "Copy assignement operator called\n";
    //virgNbr_ = rhs.virgNbr_;
    return (*this);
}

// const int& ClapTrap::getSome(void) const    {

//     std::cout << "getRawBits member function called\n";
//     return (this->virgNbr_);
// }

// void ClapTrap::setSome(const int raw) {
//     this->virgNbr_ = raw;
//     return ;
// }

void    ClapTrap::attack(const std::string& target) {

    std::cout << "ClapTrap " << this->name_ << " attacks " <<
    target << ", causing " << this->damage_ << " points of damage !\n";
    //cost enerPts
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    std::cout << "ClapTrap " << this->name_ << " take " <<
    amount << " of damage. Now at " << this->hitPts_ << " life points !!\n";
    return ;
}
void    ClapTrap::beRepaired(unsigned int amount) {

    std::cout << "ClapTrap " << this->name_ << " restore " <<
    amount << " of life points. Now at " << this->hitPts_ << " life points !!\n";
    //cost enerPts
    return ;
}