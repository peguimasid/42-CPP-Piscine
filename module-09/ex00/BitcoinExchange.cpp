#include "BitcoinExchange.hpp"

bool error(std::string errorMessage, std::string param) {
  std::cerr << "\033[0;31m";
  std::cerr << "Error: " << errorMessage << " => " << param << std::endl;
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
    return error("bad input", line);
  }

  return true;
}

bool BitcoinExchange::isDateValid(const std::string &date) {
  std::string validChars = "0123456789-";

  int delimiterCount = std::count(date.begin(), date.end(), '-');

  if (delimiterCount != 2 || date[date.size() - 1] != ' ') {
    return error("bad date", date);
  }

  if (date.size() != 11 || date[4] != '-' || date[7] != '-') {
    return error("bad date", date);
  }

  for (size_t i = 0; i < date.size() - 1; i++) {
    int foundIndex = validChars.find(date[i]);
    if (foundIndex < 0) {
      return error("bad date", date);
    }
  }

  int year = std::atof(date.substr(0, 4).c_str());
  int month = std::atof(date.substr(5, 2).c_str());
  int day = std::atof(date.substr(8, 2).c_str());

  int monthLimitDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (year < 2009 || month < 1 || month > 12 || day < 1 || day > monthLimitDays[month - 1]) {
    return error("bad date", date);
  }

  return true;
}

bool BitcoinExchange::isRateValid(const std::string &rate) {
  std::string validChars = "0123456789.";

  int pointCount = std::count(rate.begin(), rate.end(), '.');

  if (pointCount > 1 || rate.size() < 2 || rate[0] != ' ') {
    return error("bad value", rate);
  }

  if (rate[1] == '-') {
    return error("not a positive number", rate.substr(1));
  }

  for (size_t i = 1; i < rate.size(); i++) {
    int foundIndex = validChars.find(rate[i]);
    if (foundIndex < 0) {
      return error("bad value", rate.substr(1));
    }
  }

  float value = std::atof(rate.c_str());

  if (value > 1000) {
    return error("too large number", rate.substr(1));
  }

  return true;
}

void BitcoinExchange::handleExchangeFileLine(const std::string &line) {
  if (!isLineValid(line)) return;
  int pipeIndex = line.find('|');

  std::string date = line.substr(0, pipeIndex);
  if (!isDateValid(date)) return;

  std::string rateStr = line.substr(pipeIndex + 1);
  if (!isRateValid(rateStr)) return;

  std::string dateWithoutFinalSpace = date.substr(0, 10);
  float rate = std::atof(rateStr.c_str());

  float exchangeRate = rate * (--this->_map.upper_bound(dateWithoutFinalSpace))->second;

  std::cout << dateWithoutFinalSpace << " => " << rate << " = " << exchangeRate << std::endl;
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
