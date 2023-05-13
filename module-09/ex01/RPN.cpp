#include "RPN.hpp"

bool error(std::string errorMessage) {
  std::cerr << "\033[0;31m";
  std::cerr << errorMessage << std::endl;
  std::cerr << "\033[0m";
  return false;
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

bool RPN::isValidExpression(const std::string &expression) {
  std::string validChars = "0123456789 ";
  std::string validOperators = "+-*/";

  int numbersCount = 0;
  int operatorsCount = 0;

  for (size_t i = 0; i < expression.size(); i++) {
    int charIndex = validChars.find(expression[i]);
    int operatorIndex = validOperators.find(expression[i]);
    if (charIndex < 0 && operatorIndex < 0) {
      return error("Error: Invalid char");
    }
    if (charIndex >= 0 && expression[i] != ' ') numbersCount++;
    if (operatorIndex >= 0) operatorsCount++;
  }

  if (numbersCount <= operatorsCount) {
    return error("Error: Invalid RPN expression");
  }

  return true;
}

void RPN::execute(const std::string &expression) {
  if (!isValidExpression(expression)) return;
  std::cout << expression << std::endl;
}
