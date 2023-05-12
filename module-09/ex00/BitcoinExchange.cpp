#include "BitcoinExchange.hpp"

bool error(std::string errorMessage) {
  std::cerr << "\033[0;31m";
  std::cerr << errorMessage << std::endl;
  std::cerr << "\033[0m";
  return false;
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

void BitcoinExchange::parseDataFile() {
  std::ifstream inputFile("data.csv");
  std::string currentLine;

  while (getline(inputFile, currentLine)) {
    std::string date = currentLine.substr(0, 10);
    std::string rateStr = currentLine.substr(11);
    float rate = atof(rateStr.c_str());
    this->_map.insert(std::make_pair(date, rate));
  }
}

bool BitcoinExchange::isLineValid(const std::string &line) {
  if (line.size() < 14) return error("Line is too short to contain all necessary data");
  return true;
}

void BitcoinExchange::handleExchangeFileLine(const std::string &line) {
  if (!isLineValid(line)) return;
  std::cout << line << std::endl;
}

void BitcoinExchange::processExchangeFile(const std::string &filename) {
  std::ifstream inputFile(filename);
  std::string currentLine;
  int count = 0;

  while (getline(inputFile, currentLine)) {
    if (count) handleExchangeFileLine(currentLine);
    count++;
  }
}

void BitcoinExchange::execute(const std::string &filename) {
  parseDataFile();
  processExchangeFile(filename);
}
