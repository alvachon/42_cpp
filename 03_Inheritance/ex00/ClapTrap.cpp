/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/24 16:04:55 by alvachon         ###   ########.fr       */
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

//Le copy constructor permet d'avoir une "initializer list"
ClapTrap::ClapTrap(const ClapTrap& src, std::string name) :
     name_(name), hitPts_(src.hitPts_), enerPts_(src.enerPts_), damage_(src.damage_) {
    std::cout << "Copy Constructor called\n";
    //this.hp_ = rhs._hp;
    //*this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)   {
    
    std::cout << "Copy assignement operator called\n";
    return (*this);
}

void    ClapTrap::attack(const std::string& target) {
    std::cout << enerPts_ << '\n';
    if (this->enerPts_ > 0 && this->hitPts_ > 0)
    {
        this->enerPts_ -= 1;
        std::cout << "ClapTrap " << this->name_ << " attack " <<
        target << " of " << this->damage_ << '\n';
        return ;
    }
    if (this->hitPts_ <= 0)
    {
        std::cout << "ClapTrap " << this->name_ << " is dead.\n";
        return ;
    }
    if (this->enerPts_ <= 0)
    {
        std::cout << "ClapTrap " << this->name_ << " is tired.\n";
        return ;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {

    if (this->hitPts_ > 0)
    {
        this->hitPts_ -= amount;
        std::cout << "ClapTrap " << this->name_ << " take " <<
        amount << " of damage. Now at " << this->hitPts_ << " life points !!\n";
        if (this->hitPts_ <= 0)
            std::cout << "ClapTrap " << this->name_ << " is dead.\n";
        return ;
    }

}


void    ClapTrap::beRepaired(unsigned int amount) {//point de vie affectés ++, pts energy -= 1

    if (this->enerPts_ > 0 && this->hitPts_ > 0)
    {
        enerPts_ -= 1;
        hitPts_ += amount;
        std::cout << "ClapTrap " << this->name_ << " restore " <<
        amount << " of life points. Now at " << this->hitPts_ << " life points !!\n";
        return ;
    }
    if (this->hitPts_ <= 0)
    {
         std::cout << "ClapTrap " << this->name_ << " is dead. Please forfeit.\n";
        return ;
    }
    if (this->enerPts_ <= 0)
    {
        std::cout << "ClapTrap " << this->name_ << " have not enough Energy to do this action.\n";
        return ;
    }

}