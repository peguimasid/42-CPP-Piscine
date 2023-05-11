#include "BitcoinExchange.hpp"

int error(std::string errorMessage) {
  std::cout << "\033[0;31m";
  std::cout << errorMessage << std::endl;
  std::cout << "\033[0m";
  return 1;
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
  this->_map = other._map;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
  if (this == &other) return *this;
  this->_map = other._map;
  return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::parse_data_file() {
  std::ifstream inputFile("data.csv");
  std::string currentLine;

  while (getline(inputFile, currentLine)) {
    std::string date = currentLine.substr(0, 10).erase(4, 1).erase(6, 1);
    float rate = atof(currentLine.substr(11).c_str());
    this->_map.insert(std::make_pair(date, rate));
  }
}

void BitcoinExchange::process_exchange_file(const std::string &filename) {
  std::cout << filename << std::endl;
}

void BitcoinExchange::execute(const std::string &filename) {
  parse_data_file();
  process_exchange_file(filename);
}
