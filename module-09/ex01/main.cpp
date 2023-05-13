#include "RPN.hpp"

int printUsage() {
  std::cerr << "\033[0;31m";
  std::cerr << "Usage: ./RPN \"<expression>\" " << std::endl;
  std::cerr << "\033[0m";
  return 0;
}

int main(int argc, char **argv) {
  if (argc != 2) return printUsage();
  RPN rpn;
  rpn.execute(argv[1]);
  return 0;
}
