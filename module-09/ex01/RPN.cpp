#include "RPN.hpp"

int error(std::string errorMessage) {
  std::cerr << "\033[0;31m";
  std::cerr << errorMessage << std::endl;
  std::cerr << "\033[0m";
  return 0;
}

RPN::RPN() {}

RPN::RPN(const RPN &other) {
  this->_stack = other._stack;
}

RPN &RPN::operator=(const RPN &other) {
  if (this == &other) return *this;
  this->_stack = other._stack;
  return *this;
}

RPN::~RPN() {}

void RPN::execute(const std::string &expression) {
  std::cout << expression << std::endl;
}
