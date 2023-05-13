#pragma once
#include <fstream>
#include <iostream>
#include <map>

class BitcoinExchange {
 private:
  std::map<std::string, float> _map;

 public:
  // Constructors and Destructors
  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &other);
  BitcoinExchange &operator=(const BitcoinExchange &other);
  ~BitcoinExchange();

  void execute(const std::string &filename);
  void parseDataFile();
  void processExchangeFile(const std::string &filename);
  void handleExchangeFileLine(const std::string &line);

  bool isLineValid(const std::string &line);
  bool isDateValid(const std::string &date);
};
