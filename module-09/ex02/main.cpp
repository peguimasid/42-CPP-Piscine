#include "PmergeMe.hpp"

int printUsage() {
  std::cerr << "\033[0;31m";
  std::cerr << "Usage: ./PmergeMe <nums> " << std::endl;
  std::cerr << "\033[0m";
  return 1;
}

int main(int argc, char **argv) {
  if (argc < 2) return printUsage();
  (void)argv;
  std::cout << "Hello World" << std::endl;
  return 0;
}
