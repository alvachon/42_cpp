/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/03 13:36:44 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string.h>
#include "Animal.h"

class Cat: public Animal {

    public:
        Cat();
        ~Cat();
        Cat(Cat & src);
        Cat & operator=(Cat const & rhs);
        
        virtual void       makeSound(void) const;
    
    protected:
        std::string         type_;

    private:
};

#endif/* ************************************************** CAT_H */