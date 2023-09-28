/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:50:00 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 10:56:06 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string.h>
#include <locale.h>

/*
https://cplusplus.com/reference/string/
*/

class Convert {

    public:
        Convert(const std::string litteral);
        ~Convert();
        Convert(const Convert & src);
        Convert& operator=(const Convert & rhs);

        const std::string &    getLitteral(void) const;
        const std::string &    getLitType(void) const;
        const char &           getChar(void) const;
        const int &            getInt(void) const;
        const float &          getFloat(void) const;
        const double &         getDouble(void) const;

        const bool  charLitteral() const;
        const bool  floatLitteral() const;
        const bool  pseudoLitteral() const;
        const bool  intLitteral() const;
        const bool  doubleLitteral() const;

        const bool findMultiple(const char c) const;

        //utiliser throw string de base pour faire mes shenanigans
        // class InvalidLitteral : public std::exception {
        //     public:
        //         virtual const char *what(std::string pseudo) const throw()
        //         {
        //             std::string print = "\
        //              Type : char\t impossible\n\
        //              Type : int\t impossible\n\
        //              Type : float\t" + pseudo + "f\n\
        //              Type : double\t" + pseudo + "\n";
        //              return (print.c_str());
        //         }
        };

    protected:

    private:
        Convert();
        const std::string   litteral_;
        std::string         litType_;

        char          charVal_;
        int           intVal_;
        float         floatVal_;
        double        doubleVal_;
};

std::ostream& operator<<(std::ostream& o, const Convert& rhs);


#endif/* ************************************************** CONVERT_H */
