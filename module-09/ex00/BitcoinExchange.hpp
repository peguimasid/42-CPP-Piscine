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
  void process_exchange_file(const std::string &filename);
  void handle_exchange_file_line(const std::string &line);
};

int error(std::string errorMessage);
