/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 12:34:19 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) :
    class_("ClapTrap"), name_(name), hitPts_(10), enerPts_(10), damage_(0) {

    std::cout << "Default constructor " << this->class_ << " called\n";
    return ;
}

ClapTrap::~ClapTrap(void) {

    std::cout << "Destructor " << this->class_ << " called\n";
    return ;
}

//Le copy constructor permet d'avoir une "initializer list"
ClapTrap::ClapTrap(const ClapTrap& src, std::string name) :
    class_("ClapTrap"), name_(name), hitPts_(src.hitPts_), enerPts_(src.enerPts_), damage_(src.damage_) {
    std::cout << "Copy Constructor " << this->class_ << " called\n";
    //*this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)   {
    
    std::cout << "Copy assignement operator " << this->class_ << " called\n";
    return (*this);
}

void    ClapTrap::attack(const std::string& target) {

    //std::cout << "Calling Attack.\n";
    if (this->enerPts_ > 0 && this->hitPts_ > 0)
    {
        this->enerPts_ -= 1;
        std::cout << this->class_ << " " << this->name_ << " attack " <<
        target << " of " << this->damage_ << '\n';
        if (this->enerPts_ <= 0)
            std::cout << this->class_ << " " << this->name_ << " is tired.\n";
    }
        return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    //std::cout << "Calling Damage.\n";
    if (this->hitPts_ > 0)
    {
        this->hitPts_ -= amount;
        std::cout << this->class_ << " " << this->name_ << " take " <<
        amount << " of damage. Now at " << this->hitPts_ << " life points !!\n";
        if (this->hitPts_ <= 0)
            std::cout << this->class_ << " " << this->name_ << " is dead.\n";
        return ;
    }

}


void    ClapTrap::beRepaired(unsigned int amount) {

    //std::cout << "Calling repaired.\n";
    if (this->enerPts_ > 0 && this->hitPts_ > 0)
    {
        enerPts_ -= 1;
        hitPts_ += amount;
        std::cout << this->class_ << " " << this->name_ << " restore " <<
        amount << " of life points. Now at " << this->hitPts_ << " life points !\n";
        if (this->enerPts_ <= 0)
            std::cout << this->class_ << " " << this->name_ << " is tired.\n";
        return ;
    }
}