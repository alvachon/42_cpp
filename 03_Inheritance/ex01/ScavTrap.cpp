/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 13:24:08 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

    this->class_ = "ScavTrap";
    this->name_ = name;
    this->hitPts_ = 100;
    this->enerPts_ = 50;
    this->damage_ = 20;
    std::cout << "Default constructor " << this->class_ << " called\n";
    return ;
}

ScavTrap::~ScavTrap(void) {

    std::cout << "Destructor " << this->class_ << " called\n";
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& src, std::string name) : ClapTrap(src, name) {

    this->class_ = "ScavTrap";
    this->name_ = name;
    this->hitPts_ = src.hitPts_;
    this->enerPts_ = src.enerPts_;
    this->damage_ = src.damage_;
    std::cout << "Copy Constructor " << this->class_ << " called\n";
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)   {
    
    std::cout << "Copy assignement operator " << this->class_ << " called\n";
    return (*this);
}

void    ScavTrap::attack(const std::string& target) {

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

void    ScavTrap::takeDamage(unsigned int amount) {

    if (this->hitPts_ > 0)
    {
        if (amount >= this->hitPts_)
            this->hitPts_ = 0;
        else
            this->hitPts_ -= amount;
        std::cout << this->class_ << " " << this->name_ << " take " <<
        amount << " of damage. Now at " << this->hitPts_ << " life points !!\n";
        if (this->hitPts_ <= 0)
            std::cout << this->class_ << " " << this->name_ << " is dead.\n";
        return ;
    }

}

void    ScavTrap::beRepaired(unsigned int amount) {

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

void    ScavTrap::guardGate(void) {

    if (this->enerPts_ > 0 && this->hitPts_ > 0)
    {
        std::cout << this->class_ << " Enter mode : Gate keeper\n";
        this->gate_ = 1;
    }

}