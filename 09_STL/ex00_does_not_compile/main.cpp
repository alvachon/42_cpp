/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:15 by alvachon          #+#    #+#             */
/*   Updated: 2023/12/11 14:48:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::ifstream verifyInput(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: Please, provide a file as an argument." << std::endl;
		return ;
	}

	std::string inputFile = av[1];
	if (inputFile != "input.txt")
	{
		std::cerr << "Error: Please, provide input.txt as an argument." << std::endl;
		return ;
	}
	std::ifstream file(inputFile);
	if (!file.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return ;
	}
	return file;
}

std::ifstream verifyDatabase(std::string dataBaseFile)
{
	std::ifstream file(dataBaseFile);
	if (!file.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return ;
	}
	return file;
}

int main(int ac, char **av)
{
	std::ifstream inputFile 	= verifyInput(ac, av);
	std::ifstream dataBaseFile	= verifyDatabase("data.csv");
	if (inputFile && dataBaseFile)
	{
		BitcoinExchange exchange(inputFile, dataBaseFile);
	}
	
	/*BitcoinExchange exchange(file);

	double value = 3.0;
	double exchangeRate = exchange.getExchangeRateByDate("2011-01-03");
	std::cout << "Exchange rate: " << exchangeRate << std::endl;

	
	double result = exchange.convertValueWithExchangeRate(value, exchangeRate);

	exchange.displayResult(value, exchangeRate, result);*/
	
	return 0;
}
