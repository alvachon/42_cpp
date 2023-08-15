/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/26 13:23:33 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

    this->class_ = "FragTrap";
    this->name_ = name;
    this->hitPts_ = 100;
    this->enerPts_ = 100;
    this->damage_ = 30;
    std::cout << "Default constructor " << this->class_ << " called\n";
    return ;
}

FragTrap::~FragTrap(void) {

    std::cout << "Destructor " << this->class_ << " called\n";
    return ;
}

FragTrap::FragTrap(const FragTrap& src, std::string name) : ClapTrap(src, name) {

    this->class_ = "FragTrap";
    this->name_ = name;
    this->hitPts_ = src.hitPts_;
    this->enerPts_ = src.enerPts_;
    this->damage_ = src.damage_;
    std::cout << "Copy Constructor " << this->class_ << " called\n";
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    
    std::cout << "Copy assignement operator " << this->class_ << " called\n";
    return (*this);
}

void    FragTrap::attack(const std::string& target) {

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

void    FragTrap::takeDamage(unsigned int amount) {

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

void    FragTrap::beRepaired(unsigned int amount) {

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

void    FragTrap::highFivesGuys(void) {

    std::string keyWord;

    std::cout << "High Five ?: y/n ";
    std::getline(std::cin, keyWord);
    if (std::cin.eof())
        return ;
    if (keyWord.find_first_not_of("ynYN") != 0 && keyWord.size() == 1)
    {
        if (keyWord.find_first_not_of("yY") != 0 && keyWord.size() == 1)
            std::cout << "\n\t🙏\n\n";
        else
            std::cout << "\n\t🖕\n\n";
        return ;
    }
    else
    {
        std::cout << "\n\t🙄\n\n";
        return ;
    }

}