#include "BitcoinExchange.hpp"

int error(std::string errorMessage) {
  std::cout << "\033[0;31m";
  std::cout << errorMessage << std::endl;
  std::cout << "\033[0m";
  return 1;
}

int main(int argc, char **argv) {
  if (argc != 2) return error("Error: could not open file.");
  std::string filename(argv[1]);
  std::ifstream inputFile(filename);
  if (!inputFile.is_open()) {
    return error("Error: could not open file.");
  }
  if (inputFile.peek() == std::ifstream::traits_type::eof()) {
    return error("Error: File is empty");
  }
}
