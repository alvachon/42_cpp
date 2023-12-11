#include "BitcoinExchange.hpp"

struct exchangeRateEntry
{
    std::tm date;
    double exchange_rate;
};

std::map<std::tm, double> BitcoinExchange::loadExchangeRateDatabase(std::ifstream& inputFile)
{
    std::map<std::tm, double> exchangeRateDb;
    std::string line;

    std::getline(inputFile, line); // Skip the header line
    while (std::getline(inputFile, line))
    {
        std::istringstream iss(line);
        exchangeRateEntry entry;
        char delimiter;
        std::tm date = {};

        if (!(iss >> std::get_time(&date, "%Y-%m-%d") >> delimiter >> entry.exchange_rate))
        {
            std::cerr << "Error: Invalid line in exchange rate database." << std::endl;
            exit(1); //throw error next implement
        }
        exchangeRateDb[date] = entry.exchange_rate;
    }
}

BitcoinExchange::BitcoinExchange(std::ifstream& inputFile, std::ifstream& dataBaseFile)
{
    this->_exchangeRateDb = loadExchangeRateDatabase(dataBaseFile);
    //this->_inputFile = 

}

BitcoinExchange::~BitcoinExchange()
{
   // _map.clear();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& src, std::ifstream& inputFile, std::ifstream& dataBaseFile)
{
    /*std::string line;
    std::string key;
    double value;

    while (std::getline(inputFile, line))
    {
        std::istringstream iss(line);
        if (!(iss >> key >> value)) { break; } // error
        _map[key] = value;
    }
    _map = src._map;*/
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    /*_map = rhs._map;
    return *this;*/
}

double BitcoinExchange::getExchangeRateByDate(std::string date)
{
    /*std::map<std::string, double>::iterator it = _map.find(date);
    if (it != _map.end())
        return it->second;
    else
        return 0;*/
}

double BitcoinExchange::convertValueWithExchangeRate(double value, double exchangeRate)
{
    
}

void BitcoinExchange::displayResult(double value, double exchangeRate, double displayResult)
{
    std::cout << "Value: " << value << std::endl;
    std::cout << "Exchange rate: " << exchangeRate << std::endl;
    std::cout << "Result: " << displayResult << std::endl;
}

