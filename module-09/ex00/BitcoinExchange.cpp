#include "BitcoinExchange.hpp"

bool error(std::string errorMessage, std::string param) {
  std::cerr << "\033[0;31m";
  std::cerr << errorMessage << param << std::endl;
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
  int pipeCount = std::count(line.begin(), line.end(), '|');

  if (pipeCount != 1) {
    return error("Error: bad input => ", line);
  }

  return true;
}

std::string BitcoinExchange::parseDate(const std::string &string) {
  return string;
}

void BitcoinExchange::handleExchangeFileLine(const std::string &line) {
  if (!isLineValid(line)) return;
  int pipeIndex = line.find('|');
  std::string date = parseDate(line.substr(0, pipeIndex));
  std::string rate = line.substr(pipeIndex + 1);
  std::cout << date << "=" << rate << std::endl;
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
