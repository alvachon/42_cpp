/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/03 13:54:25 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include <string.h>
#include "WrongAnimal.h"

class WrongCat: public WrongAnimal {

    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat & src);
        WrongCat & operator=(WrongCat const & rhs);
        
        virtual void       makeSound(void) const;
    
    protected:
        std::string         type_;

    private:
};

#endif/* ************************************************** WRONGCAT_H */