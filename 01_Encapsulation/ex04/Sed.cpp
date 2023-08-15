/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/07/20 12:24:17 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.h"

Sed::Sed(std::string av1, std::string av2, std::string av3) :
    newFile_(av1), wordIn_(av2), wordOut_(av3)   {

    return ;
}

Sed::~Sed(void)   {

    return ;
}

void    Sed::doTheThing(void)   {

        input_.open(newFile_);
        newFile_.append(".replace");
        if (input_)
        {
            output_.open(newFile_);
            while (!input_.eof())
            {
                getline(input_, str_);
                for (unsigned i = 0; i < str_.length(); ++i)
                {
                    if (str_[i] == wordIn_[0])
                    {
                        while (str_.compare(i, wordIn_.length(), wordIn_) == 0)
                        {
                            output_ << wordOut_;
                            i += wordIn_.length();
                        }
                    }
                    if (str_[i])
                        output_ << str_[i];
                }
                output_ << '\n';
            }
            input_.close();
            output_.close();
        }
}