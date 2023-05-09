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
  void parse_data_file();
};
