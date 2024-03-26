/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:20 by alvachon          #+#    #+#             */
/*   Updated: 2023/12/11 14:48:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>
#include <algorithm>

class BitcoinExchange{

    public:
        BitcoinExchange(std::ifstream& inputFile, std::ifstream& dataBaseFile);
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange& src, std::ifstream& inputFile, std::ifstream& dataBaseFile);
        BitcoinExchange& operator=(const BitcoinExchange& rhs);

        std::map<std::tm, double> loadExchangeRateDatabase(std::ifstream& inputFile);

        double getExchangeRateByDate(std::string date);
        double convertValueWithExchangeRate(double value, double exchangeRate);
        void   displayResult(double value, double exchangeRate, double displayResult);

    private:
        BitcoinExchange();
        std::map<std::tm, double> _exchangeRateDb;
};


#endif/* ************************************************** BITCOINEXCHANGE_H */
