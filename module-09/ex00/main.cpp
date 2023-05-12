#include "BitcoinExchange.hpp"

bool isValidFile(const std::string &filename) {
  std::ifstream inputFile(filename);
  if (!inputFile) {
    return false;
  }
  if (inputFile.peek() == std::ifstream::traits_type::eof()) {
    return false;
  }
  return true;
}

int main(int argc, char **argv) {
  if (argc != 2 || !isValidFile(argv[1])) {
    std::cerr << "Error: could not open file." << std::endl;
    return 1;
  }
  BitcoinExchange btc;
  btc.execute(argv[1]);
  return 0;
}
