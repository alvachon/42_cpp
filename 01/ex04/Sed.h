/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/20 11:14:08 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

#include <iostream>
#include <fstream>
#include <string>

class Sed {

    public:
        
        Sed(std::string av1, std::string av2, std::string av3);
        ~Sed(void);

        void    doTheThing();

    private:
        std::string     str_;
        std::ofstream   output_;
        std::ifstream   input_;
        std::string     newFile_;// = av[1];
        std::string     wordIn_;// = av[2];
        std::string     wordOut_;// = av[3];
};

#endif/* ************************************************** SED_H*/