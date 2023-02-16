#include "Scalar.hpp"

int print_usage() {
  std::cerr << "Usage: ./convert <value>" << std::endl;
  return 1;
}

int main(int argc, char **argv) {
  if (argc != 2) return print_usage();
  Scalar::convert(argv[1]);
}
