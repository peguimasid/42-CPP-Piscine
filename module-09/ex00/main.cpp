#include "BitcoinExchange.hpp"

int error(std::string errorMessage) {
  std::cout << "\033[0;31m";
  std::cout << errorMessage << std::endl;
  std::cout << "\033[0m";
  return 1;
}

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
    return error("Error: could not open file.");
  }
  return 0;
}
